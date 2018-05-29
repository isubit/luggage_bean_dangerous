<?php
/**
 * @file
 * luggage_bean_dangerous.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function luggage_bean_dangerous_filter_default_formats() {
  $formats = array();

  // Exported format: Luggage Bean Dangerous.
  $formats['luggage_bean_dangerous'] = array(
    'format' => 'luggage_bean_dangerous',
    'name' => 'Luggage Bean Dangerous',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(),
  );

  return $formats;
}
