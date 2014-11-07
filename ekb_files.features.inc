<?php
/**
 * @file
 * ekb_files.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ekb_files_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ekb_files_node_info() {
  $items = array(
    'file' => array(
      'name' => t('File'),
      'base' => 'node_content',
      'description' => t('Other, miscellaneous document that are not official documentation or part of a department that has their own content type.  These will be files that should be private'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
