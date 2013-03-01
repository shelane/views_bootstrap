<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_bootstrap_thumbnail_plugin_style(&$vars) {
  $vars['column_type'] = 'span' . $vars['view']->style_options['column_type'];
  $vars['classes_array'][] = 'thumbnails';
}
