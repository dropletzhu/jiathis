<?php

/**
 * @file
 * Administration page for the jiathis service
 */

/**
 * Menu callback: displays the jiathis module settings page.
 *
 * @ingroup forms
 */
function jiathis_admin_settings() {
	$script = '';
	drupal_set_html_head('');
	
	$form['display']['jiathis_script'] = array(
	  '#type' => 'textarea',
	  '#title' => t('Jiathis service script'),
	  '#maxlength' => 1024,
	  '#default_value' => variable_get('jiathis_script', ''),
	  '#description' => t('Get jiathis script from <a href="http://www.jiathis.com"> Jiathis </a>'),
	);
	
	return system_settings_form($form);
}
