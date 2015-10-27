<?php
/**
 * @file
 * test.features.contact_categories.inc
 */

/**
 * Implements hook_contact_categories_defaults().
 */
function test_contact_categories_defaults() {
  return array(
    'Contact Us' => array(
      'category' => 'Contact Us',
      'recipients' => 'admin@mail.com',
      'reply' => '',
      'weight' => 0,
      'selected' => 1,
    ),
  );
}
