<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_bootstrap_thumbnail_plugin_style(&$vars) {
  if (isset($vars['view']->style_options['column_type'])) {
    $vars['column_type'] = $vars['view']->style_options['column_type'];
  }
}
