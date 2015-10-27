<?php
/**
 * @file
 * recipe_content.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function recipe_content_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: management_recent-log-messages:admin/reports/dblog.
  $menu_links['management_recent-log-messages:admin/reports/dblog'] = array(
    'menu_name' => 'management',
    'link_path' => 'admin/reports/dblog',
    'router_path' => 'admin/reports/dblog',
    'link_title' => 'Recent log messages',
    'options' => array(
      'attributes' => array(
        'title' => 'View events that have recently been logged.',
      ),
      'identifier' => 'management_recent-log-messages:admin/reports/dblog',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -1,
    'customized' => 0,
    'parent_identifier' => 'management_reports:admin/reports',
  );
  // Exported menu link: navigation_recipe:node/add/recipe.
  $menu_links['navigation_recipe:node/add/recipe'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/recipe',
    'router_path' => 'node/add/recipe',
    'link_title' => 'Recipe',
    'options' => array(
      'identifier' => 'navigation_recipe:node/add/recipe',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Recent log messages');
  t('Recipe');

  return $menu_links;
}
