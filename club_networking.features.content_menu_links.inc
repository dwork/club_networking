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

  // Exported menu link: menu-records:closed-business-by-referred
  $menu_links['menu-records:closed-business-by-referred'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'closed-business-by-referred',
    'router_path' => 'closed-business-by-referred',
    'link_title' => 'Closed By Referred',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-records:closed-business-by-referring
  $menu_links['menu-records:closed-business-by-referring'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'closed-business-by-referring',
    'router_path' => 'closed-business-by-referring',
    'link_title' => 'Closed by Referring',
    'options' => array(
      'attributes' => array(
        'title' => 'Closed business by referring member',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
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
    'weight' => '-50',
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
    'weight' => '-49',
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
    'weight' => '-48',
  );
  // Exported menu link: menu-records:referral-details-by-referred
  $menu_links['menu-records:referral-details-by-referred'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'referral-details-by-referred',
    'router_path' => 'referral-details-by-referred',
    'link_title' => 'Referrals to Member',
    'options' => array(
      'attributes' => array(
        'title' => 'Referrals to member',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
  );
  // Exported menu link: menu-records:referral-details-by-referring
  $menu_links['menu-records:referral-details-by-referring'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'referral-details-by-referring',
    'router_path' => 'referral-details-by-referring',
    'link_title' => 'Referrals by Member',
    'options' => array(
      'attributes' => array(
        'title' => 'Print detailed report of referrals by referring member; selectable by member name & date range',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
  );
  // Exported menu link: menu-records:referrals
  $menu_links['menu-records:referrals'] = array(
    'menu_name' => 'menu-records',
    'link_path' => 'referrals',
    'router_path' => 'referrals',
    'link_title' => 'Referral Report',
    'options' => array(
      'attributes' => array(
        'title' => 'List referral counts and amounts for any date range',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
  );
  // Exported menu link: navigation:substitute-list
  $menu_links['navigation:substitute-list'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'substitute-list',
    'router_path' => 'substitute-list',
    'link_title' => 'Substitute List',
    'options' => array(
      'attributes' => array(
        'title' => 'List of substitutes',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bus. Exchg: Add');
  t('Closed By Referred');
  t('Closed by Referring');
  t('M2M: Add');
  t('Referral Exchg: Add');
  t('Referral Report');
  t('Referrals by Member');
  t('Referrals to Member');
  t('Substitute List');


  return $menu_links;
}
