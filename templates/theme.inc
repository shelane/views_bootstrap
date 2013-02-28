<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_bootstrap_carousel_plugin_style(&$vars) {
  //--
}

/**
 * Implementation of template preprocess for the view fields.
 */
function template_preprocess_views_bootstrap_carousel_plugin_rows(&$vars) {
  $view = &$vars['view'];

  foreach ($vars['options'] as $id => $field) {
    switch ($id) {
      case 'link':
        $vars[$id] = $view->field[$field]->get_value($vars['row']);
        break;

      default:
        $vars[$id] = $view->field[$field]->theme($vars['row']);
        break;
    }
  }
}
