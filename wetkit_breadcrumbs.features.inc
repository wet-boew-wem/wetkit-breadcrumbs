<?php
/**
 * @file
 * wetkit_breadcrumbs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function wetkit_breadcrumbs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "path_breadcrumbs" && $api == "path_breadcrumbs") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
