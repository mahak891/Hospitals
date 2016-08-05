<?php
/**
 * @file
 * content_type.features.inc
 */

/**
 * Implements hook_node_info().
 */
function content_type_node_info() {
  $items = array(
    'doctor' => array(
      'name' => t('Doctor'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'hospitals_page' => array(
      'name' => t('Hospitals page'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('name'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
