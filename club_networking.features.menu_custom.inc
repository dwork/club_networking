<?php
/**
 * @file
 * club_networking.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function club_networking_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-records.
  $menus['menu-records'] = array(
    'menu_name' => 'menu-records',
    'title' => 'Records',
    'description' => 'Network Group record keeping links',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Network Group record keeping links');
  t('Records');


  return $menus;
}
