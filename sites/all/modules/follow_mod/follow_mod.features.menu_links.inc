<?php
/**
 * @file
 * follow_mod.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function follow_mod_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_follow:admin/config/services/follow.
  $menu_links['management_follow:admin/config/services/follow'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/config/services/follow',
    'router_path' => 'admin/config/services/follow',
    'link_title' => 'Follow',
    'options' => array(
      'attributes' => array(
        'title' => 'Configure the site-wide web service follow links.',
      ),
      'identifier' => 'management_follow:admin/config/services/follow',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'management_web-services:admin/config/services',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Follow');

  return $menu_links;
}
