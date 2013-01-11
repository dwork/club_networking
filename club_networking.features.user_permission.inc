<?php
/**
 * @file
 * club_networking.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function club_networking_user_default_permissions() {
  $permissions = array();

  // Exported permission: clone node.
  $permissions['clone node'] = array(
    'name' => 'clone node',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: clone own nodes.
  $permissions['clone own nodes'] = array(
    'name' => 'clone own nodes',
    'roles' => array(
      0 => 'administrator',
    ),
    'module' => 'clone',
  );

  // Exported permission: create business_exchange content.
  $permissions['create business_exchange content'] = array(
    'name' => 'create business_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create m2m content.
  $permissions['create m2m content'] = array(
    'name' => 'create m2m content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: create referral_exchange content.
  $permissions['create referral_exchange content'] = array(
    'name' => 'create referral_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any business_exchange content.
  $permissions['delete any business_exchange content'] = array(
    'name' => 'delete any business_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any m2m content.
  $permissions['delete any m2m content'] = array(
    'name' => 'delete any m2m content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any referral_exchange content.
  $permissions['delete any referral_exchange content'] = array(
    'name' => 'delete any referral_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any substitute content.
  $permissions['delete any substitute content'] = array(
    'name' => 'delete any substitute content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'Secretary',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own business_exchange content.
  $permissions['delete own business_exchange content'] = array(
    'name' => 'delete own business_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own m2m content.
  $permissions['delete own m2m content'] = array(
    'name' => 'delete own m2m content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own referral_exchange content.
  $permissions['delete own referral_exchange content'] = array(
    'name' => 'delete own referral_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own substitute content.
  $permissions['delete own substitute content'] = array(
    'name' => 'delete own substitute content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'Secretary',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any business_exchange content.
  $permissions['edit any business_exchange content'] = array(
    'name' => 'edit any business_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any m2m content.
  $permissions['edit any m2m content'] = array(
    'name' => 'edit any m2m content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any referral_exchange content.
  $permissions['edit any referral_exchange content'] = array(
    'name' => 'edit any referral_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any substitute content.
  $permissions['edit any substitute content'] = array(
    'name' => 'edit any substitute content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'Secretary',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own business_exchange content.
  $permissions['edit own business_exchange content'] = array(
    'name' => 'edit own business_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own m2m content.
  $permissions['edit own m2m content'] = array(
    'name' => 'edit own m2m content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own referral_exchange content.
  $permissions['edit own referral_exchange content'] = array(
    'name' => 'edit own referral_exchange content',
    'roles' => array(
      0 => 'Secretary',
      1 => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own substitute content.
  $permissions['edit own substitute content'] = array(
    'name' => 'edit own substitute content',
    'roles' => array(
      0 => 'Attendance',
      1 => 'Secretary',
      2 => 'administrator',
    ),
    'module' => 'node',
  );

  return $permissions;
}
