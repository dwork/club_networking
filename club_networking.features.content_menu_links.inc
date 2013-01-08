<?php
/**
 * @file
 * club_networking.features.content_menu_links.inc
 */

/**
 * Implements hook_content_menu_links_defaults().
 */
function club_networking_content_menu_links_defaults() {
  $menu_links = array();

  // Exported menu link: menu-records:node/add/business-exchange
  $menu_links['menu-records:node/add/business-exchange'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'node/add/business-exchange',
    'router_path' => 'node/add/business-exchange',
    'link_title' => 'Bus. Exchg: Add',
    'options' => array(
      'attributes' => array(
        'title' => 'Add new business exchange',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-records:node/add/m2m
  $menu_links['menu-records:node/add/m2m'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'node/add/m2m',
    'router_path' => 'node/add/m2m',
    'link_title' => 'M2M: Add',
    'options' => array(
      'attributes' => array(
        'title' => 'Add member to member exchange',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-records:node/add/referral-exchange
  $menu_links['menu-records:node/add/referral-exchange'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'node/add/referral-exchange',
    'router_path' => 'node/add/referral-exchange',
    'link_title' => 'Referral Exchg: Add',
    'options' => array(
      'attributes' => array(
        'title' => 'Add a referral exchange',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bus. Exchg: Add');
  t('M2M: Add');
  t('Referral Exchg: Add');


  return $menu_links;
}
