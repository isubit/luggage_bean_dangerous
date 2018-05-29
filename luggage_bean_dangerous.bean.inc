<?php
/**
 * @file
 * luggage_bean_dangerous.bean.inc
 */

/**
 * Implements hook_bean_admin_ui_types().
 */
function luggage_bean_dangerous_bean_admin_ui_types() {
  $export = array();

  $bean_type = new stdClass();
  $bean_type->disabled = FALSE; /* Edit this to true to make a default bean_type disabled initially */
  $bean_type->api_version = 5;
  $bean_type->name = 'dangerous';
  $bean_type->label = 'Dangerous';
  $bean_type->options = '';
  $bean_type->description = '';
  $export['dangerous'] = $bean_type;

  return $export;
}
