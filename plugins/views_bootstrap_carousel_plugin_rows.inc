<?php
/**
 * @file
 * Definition of views_bootstrap_plugin_rows.
 */

/**
 * Class to define a row plugin handler.
 */
class ViewsBootstrapCarouselPluginRows extends views_plugin_row {
  /**
   * Definition.
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['title'] = array('default' => '');
    $options['image'] = array('default' => '');
    $options['link'] = array('default' => '');
    $options['description'] = array('description' => '');
    return $options;
  }

  /**
   * Form.
   */
  function options_form(&$form, &$form_state) {
    parent::options_form($form, $form_state);

    // Pre-build all of our option lists for the dials and switches that follow.
    $fields = array('' => t('<None>'));
    foreach ($this->display->handler->get_handlers('field') as $field => $handler) {
      if ($label = $handler->label()) {
        $fields[$field] = $label;
      }
      else {
        $fields[$field] = $handler->ui_name();
      }
    }

    $form['title'] = array(
      '#type' => 'select',
      '#title' => t('Title'),
      '#options' => $fields,
      '#default_value' => $this->options['title'],
    );

    $form['image'] = array(
      '#type' => 'select',
      '#title' => t('Image'),
      '#options' => $fields,
      '#default_value' => $this->options['image'],
    );

    $form['link'] = array(
      '#type' => 'select',
      '#title' => t('Link'),
      '#options' => $fields,
      '#default_value' => $this->options['link'],
    );

    $form['description'] = array(
      '#type' => 'select',
      '#title' => t('Description'),
      '#options' => $fields,
      '#default_value' => $this->options['description'],
    );
  }
}
