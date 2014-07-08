<?php

/**
 * @file
 * Defines the inline entity form controller for webform workflow states.
 */

class WebformWorkflowStateInlineEntityFormController extends EntityInlineEntityFormController {

  /**
  * Overrides EntityInlineEntityFormController::labels().
   */
  public function labels() {
    $labels = array(
      'singular' => t('state'),
      'plural' => t('states'),
    );
    return $labels;
  }

  /**
   * Overrides EntityInlineEntityFormController::entityForm().
   */
  public function entityForm($entity_form, &$form_state) {
    $entity = $entity_form['#entity'];
    if (!isset($entity->nid)) {
      $entity->nid = $form_state['node']->nid;
    }

    form_load_include($form_state, 'inc', 'webform_workflow', 'includes/webform_workflow_state.forms');
    webform_workflow_state_form_attach($entity_form, $form_state, $entity);

    return $entity_form;
  }

  /**
   * Overrides EntityInlineEntityFormController::defaultFields().
   */
  public function defaultFields($bundles) {
    $fields = array();
    $fields['label'] = array(
      'type' => 'property',
      'label' => t('Name'),
      'visible' => TRUE,
      'weight' => 1,
    );
    return $fields;
  }

}