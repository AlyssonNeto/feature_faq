<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function features_faq_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function features_faq_node_info() {
  $items = array(
    'faq' => array(
      'name' => t('FAQ'),
      'module' => 'features',
      'description' => t('A "frequently asked" question/answer pair to display on the FAQ page of this website.'),
      'has_title' => '1',
      'title_label' => t('Question'),
      'has_body' => '1',
      'body_label' => t('Answer'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function features_faq_views_api() {
  return array(
    'api' => '2',
  );
}
