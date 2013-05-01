<?php
/**
 * @file
 * opendeals_demo_content.features.content.inc
 */

/**
 * Implements hook_content_defaults().
 */
function opendeals_demo_content_content_defaults() {
$content = array();
$content['faq'] = (object)array(
  'exported_path' => 'faq',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/faq',
    'router_path' => 'node/%',
    'link_title' => 'FAQ',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'identifier' => 'main-menu:node-name/faq',
  ),
  'title' => 'FAQ',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1318431321',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'faq',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h3>About Open Deals</h3><p>Open Deals is a Free Deals Site distribution, based on Drupal 7, Drupal Commerce and other modules. You can use the distribution for you or your clients and you can modify it at will. Netstudio, a <a href="http://www.netstudio.gr/en" target="_blank">drupal development services</a> agency in Greece is behind the distribution and you can ask for paid support if you need help installing, setting up, hosting or modifying your site. We hope that the distribution will be beneficial and useful for you. We\'ll be glad to listen to your comments and feedback.</p><h3>Installation and setup instructions</h3><p>1. Install as you would install Drupal.</p><p>2. Do any modification you see fit to make your site work as expected. Most probably, you will want to:<br>a) Change the logo and / or the colors of your site. We propose that you do a subtheme and not alter the main theme.<br>b) Add and setup your payment methods and checkout process.<br>c) Change the texts of the site to make it unique.<br>d) Update the links to Facebook, Twitter etc. to yours.<br>e) Insert your own Google Analytics ID and setup your Google Analytics account to accept e-commerce data.</p><h3>How to Create new deals</h3><p>We have prepared the "Deals management" view that will show all deals and has links to the steps you need to take in order to create a new one. Is is the first (left) menu item on the admin menu. The link is <a href="deals-management">/deals-management</a>.</p><h3>Limitations</h3><p>Currently, the installation profile works only with MySQL databases. In order to make it work with other databases, you will have to import the db.sql file manually.</p><h3>Customizations</h3><p>The Open Deals distribution is open source and free to use.</p><p>You may customize it at will for you or your clients without paying any license fees.</p><h3>Feedback and bug reports</h3><p>If something is not working as expected, you can contact netstudio at <a href="http://www.netstudio.gr/en/contact" target="_blank">www.netstudio.gr/en/contact</a> or open an issue at the project\'s issue queue: <a href="http://drupal.org/project/opendeals" target="_blank">http://drupal.org/project/opendeals</a>.</p><h3>Professional Support</h3><p>If you need additional features, customization, drupal optimized hosting, <a href="http://www.userfeel.com" target="_blank">usability testing</a> or full site integration, you can get professional support by netstudio, at <a href="http://www.netstudio.gr/en/contact" target="_blank">www.netstudio.gr/en/contact</a>, by phone at +30 210 8004447 or by Skype at yannis75.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h3>About Open Deals</h3>
<p>Open Deals is a Free Deals Site distribution, based on Drupal 7, Drupal Commerce and other modules. You can use the distribution for you or your clients and you can modify it at will. Netstudio, a <a href="http://www.netstudio.gr/en" target="_blank">drupal development services</a> agency in Greece is behind the distribution and you can ask for paid support if you need help installing, setting up, hosting or modifying your site. We hope that the distribution will be beneficial and useful for you. We\'ll be glad to listen to your comments and feedback.</p>
<h3>Installation and setup instructions</h3>
<p>1. Install as you would install Drupal.</p>
<p>2. Do any modification you see fit to make your site work as expected. Most probably, you will want to:<br />a) Change the logo and / or the colors of your site. We propose that you do a subtheme and not alter the main theme.<br />b) Add and setup your payment methods and checkout process.<br />c) Change the texts of the site to make it unique.<br />d) Update the links to Facebook, Twitter etc. to yours.<br />e) Insert your own Google Analytics ID and setup your Google Analytics account to accept e-commerce data.</p>
<h3>How to Create new deals</h3>
<p>We have prepared the "Deals management" view that will show all deals and has links to the steps you need to take in order to create a new one. Is is the first (left) menu item on the admin menu. The link is <a href="http://localhost:8888/opendeals/deals-management">/deals-management</a>.</p>
<h3>Limitations</h3>
<p>Currently, the installation profile works only with MySQL databases. In order to make it work with other databases, you will have to import the db.sql file manually.</p>
<h3>Customizations</h3>
<p>The Open Deals distribution is open source and free to use.</p>
<p>You may customize it at will for you or your clients without paying any license fees.</p>
<h3>Feedback and bug reports</h3>
<p>If something is not working as expected, you can contact netstudio at <a href="http://www.netstudio.gr/en/contact" target="_blank">www.netstudio.gr/en/contact</a> or open an issue at the project\'s issue queue: <a href="http://drupal.org/project/opendeals" target="_blank">http://drupal.org/project/opendeals</a>.</p>
<h3>Professional Support</h3>
<p>If you need additional features, customization, drupal optimized hosting, <a href="http://www.userfeel.com" target="_blank">usability testing</a> or full site integration, you can get professional support by netstudio, at <a href="http://www.netstudio.gr/en/contact" target="_blank">www.netstudio.gr/en/contact</a>, by phone at +30 210 8004447 or by Skype at yannis75.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_img' => array(
    'und' => array(
      0 => array(
        'alt' => '',
        'title' => '',
        'width' => '265',
        'height' => '74',
        'filename' => 'logo_3.png',
        'uri' => 'public://logo_3.png',
        'filemime' => 'image/png',
        'filesize' => '2000',
        'status' => '1',
        'rdf_mapping' => array(),
        'image' => '�PNG

' . "\0" . '' . "\0" . '' . "\0" . '
N���М��' . "\0" . 'c��R&&��\\�$!s����
	���-	ٺ�ܕ�\'�9�-X�7ū����?}�ڂG�\\�F��
�
�ǆ�ݽIS[&�6-�I��9��g$�����e' . "\0" . '�g��O����0f���^Hl���(:���NS#��
F&��U�w�$^\'����Q��rb�i3�>�m%%6��<&�wT�}۫-=���F������S����iO+ެ	"A$�� D�w$��F$�� D�H	"A$�� W�?' . "\0" . '��^<$�@�' . "\0" . '' . "\0" . '' . "\0" . '' . "\0" . 'IEND�B`�',
      ),
    ),
  ),
);
$content['how-it-works'] = (object)array(
  'exported_path' => 'how-it-works',
  'link' => array(
    'menu_name' => 'main-menu',
    'link_path' => 'node-name/how-it-works',
    'router_path' => 'node/%',
    'link_title' => 'How it works',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'identifier' => 'main-menu:node-name/how-it-works',
  ),
  'title' => 'How It Works',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1318260188',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'how-it-works',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<h2>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</h2><p>Curabitur eu lacus vitae odio interdum ultricies. Ut nisi lectus, condimentum eget congue vel, gravida fermentum nisl. Maecenas non justo massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla ornare, augue quis faucibus consectetur, sapien orci pharetra nisl, in aliquam nisi lacus ac est. Etiam in diam et tellus feugiat dignissim. Proin et mi vel nisl blandit ullamcorper at sed tellus. In eu tellus nec risus laoreet ultrices. In eu est vitae lorem consectetur eleifend. Nunc eu risus id velit rutrum auctor ut quis est. Sed tempus pellentesque lectus sit amet vehicula. Praesent consequat blandit sodales. Aenean sit amet sem non dui commodo volutpat. Vivamus sed mi quis leo facilisis scelerisque eget quis lectus. Quisque eu sollicitudin libero.</p>',
        'summary' => '',
        'format' => 'full_html',
        'safe_value' => '<h2>Lorem ipsum dolor sit amet, consectetur adipiscing elit.</h2>
<p>Curabitur eu lacus vitae odio interdum ultricies. Ut nisi lectus, condimentum eget congue vel, gravida fermentum nisl. Maecenas non justo massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Nulla ornare, augue quis faucibus consectetur, sapien orci pharetra nisl, in aliquam nisi lacus ac est. Etiam in diam et tellus feugiat dignissim. Proin et mi vel nisl blandit ullamcorper at sed tellus. In eu tellus nec risus laoreet ultrices. In eu est vitae lorem consectetur eleifend. Nunc eu risus id velit rutrum auctor ut quis est. Sed tempus pellentesque lectus sit amet vehicula. Praesent consequat blandit sodales. Aenean sit amet sem non dui commodo volutpat. Vivamus sed mi quis leo facilisis scelerisque eget quis lectus. Quisque eu sollicitudin libero.</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
$content['thank-you'] = (object)array(
  'exported_path' => 'thank-you',
  'title' => 'Thank you',
  'status' => '1',
  'promote' => '0',
  'sticky' => '0',
  'type' => 'page',
  'language' => 'und',
  'created' => '1318675447',
  'comment' => '1',
  'translate' => '0',
  'machine_name' => 'thank-you',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Thank you for contacting us. We will respond as soon as possible.</p><p>&nbsp;</p><p>&nbsp;</p><p>&nbsp;</p>',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Thank you for contacting us. We will respond as soon as possible.</p>
<p> </p>
<p> </p>
<p> </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
);
return $content;
}