<?php
/**
 * @file
 * club_networking.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function club_networking_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function club_networking_node_info() {
  $items = array(
    'business_exchange' => array(
      'name' => t('Business Exchange'),
      'base' => 'node_content',
      'description' => t('Completed business'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'm2m' => array(
      'name' => t('M2M'),
      'base' => 'node_content',
      'description' => t('Member to Member exchange'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'referral_exchange' => array(
      'name' => t('Referral Exchange'),
      'base' => 'node_content',
      'description' => t('Referral Exchange, referral or lead'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
