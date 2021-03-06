<?php

/**
 * @file
 * Administrative callbacks and form builder functions for Commerce Sales Reports.
 */

/**
 * Commerce Sales Reports admin form.
 */
function commerce_sales_admin_form($form, &$form_state) {
  // Find out what our status is. Use both the state of existing fields
  // and the state of variables to determine what's right.

  $field_name = 'commerce_sales';
  $field = field_info_field($field_name);

  $form['#tree'] = TRUE;

  $form['product_types'] = array(
    '#type' => 'fieldset',
    '#title' => t('Enable sales reporting for these product types'),
    '#description' => t('Note that disabling sales reporting removes the Sales field from the product type, deleting any existing sales data for that product type.')
  );

  // Create a checkbox for each product type, set with the current sales
  // enabled state.
  foreach (commerce_product_types() as $type => $product_type) {
    $instance[$type] = field_info_instance('commerce_product', 'commerce_sales', $type);
    $enabled[$type] = (!empty($instance[$type]));

    $form['product_types'][$type] = array(
      '#type' => 'checkbox',
      '#default_value' => $enabled[$type],
      '#title' => t('@name (@machine_name)', array('@name' => $product_type['name'], '@machine_name' => $type)),
    );

  }

  // Add a checkbox that requires them to say "I do", but don't show it
  // (#access == FALSE) unless they're deleting.
  if (!empty($form_state['commerce_sales']['delete_instances'])) {
    $type_plural = format_plural(count($form_state['commerce_sales']['delete_instances']), t('type'), t('types'));
    $affirmation = t('I understand that all sales data will be permanently removed from the product @type_plural %product_types.',
      array(
        '@type_plural' => $type_plural,
        '%product_types' => implode(', ', $form_state['commerce_sales']['delete_instances']),
      )
    );
  }
  $form['confirmation'] = array(
    '#type' => 'checkbox',
    '#title' => !empty($affirmation) ? $affirmation : '',
    '#default_value' => FALSE,
    '#access' => FALSE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
  );

  // If they're deleting, show the confirmation checkbox.
  if (!empty($form_state['commerce_sales']['delete_instances'])) {
    $form['confirmation']['#access'] = TRUE;
    drupal_set_message(t('You must click the confirmation checkbox to confirm that you want to delete sales data'), 'warning');
  }

  return $form;
}

/**
 * Form validator. If they are deleting and have not checked the confirmation
 * checkbox, make them do so.
 */
function commerce_sales_admin_form_validate($form, &$form_state) {
  if (!empty($form_state['commerce_sales']['delete_instances']) && empty($form_state['values']['confirmation'])) {
    form_set_error('confirmation', t('Please check the "I understand" checkbox to indicate you understand that all sales data in these fields will be deleted: %fields.', array('%fields' => implode(', ', $form_state['commerce_sales']['delete_instances']))));
  }
}

/**
 * Add or remove the Sales field from product types.
 */
function commerce_sales_admin_form_submit($form, &$form_state) {
  $form_state['commerce_sales']['delete_instances'] = array();
  foreach ($form_state['values']['product_types'] as $type => $enable) {
    $instance = field_info_instance('commerce_product', 'commerce_sales', $type);

    $currently_enabled = commerce_sales_product_type_enabled($type);
    // If they want us to enable it and it doesn't currently exist, do the work.
    if ($enable && !$currently_enabled) {
      commerce_sales_create_instance('commerce_sales', 'commerce_product', $type, t('Sales'));
      drupal_set_message(t('Sales management has been enabled on the %type product type', array('%type' => $type)));
    }
    // Conversely, if they *don't* want it and it's currently enabled,
    // warn them about the consequences or do it.
    else if (!$enable && $currently_enabled) {
      // If they haven't clicked the "confirm" checkbox, rebuild and get them
      // to do it.
      if (empty($form_state['values']['confirmation'])) {
        $form_state['commerce_sales']['delete_instances'][] = $type;
        $form_state['rebuild'] = TRUE;
      }
      // Otherwise they already have clicked it and we can delete.
      else {
        // Remove the instance.
        field_delete_instance($instance);
        drupal_set_message(t('Sales management has been disabled on the %type product type', array('%type' => $type)));
      }
    }
  }
}
