<?php
/**
 * @file
 * about_me.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function about_me_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_about-me:node/2.
  $menu_links['main-menu_about-me:node/2'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/2',
    'router_path' => 'node/%',
    'link_title' => 'About Me',
    'options' => array(
      'identifier' => 'main-menu_about-me:node/2',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('About Me');

  return $menu_links;
}
