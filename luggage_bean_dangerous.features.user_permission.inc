<?php
/**
 * @file
 * luggage_bean_dangerous.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function luggage_bean_dangerous_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'view any dangerous bean'.
  $permissions['view any dangerous bean'] = array(
    'name' => 'view any dangerous bean',
    'roles' => array(
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'bean',
  );

  return $permissions;
}
