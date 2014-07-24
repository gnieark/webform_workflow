<?php
/**
 * @file
 * Default field bases for the Webform Workflow module.
 */

/**
 * Get default field bases.
 *
 * @return array
 *   An array of field base definitions.
 */
function _webform_workflow_field_bases() {
  $field_bases = array();

  // Exported field_base: 'webform_workflow_states'
  $field_bases['webform_workflow_states'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array('node'),
    'field_name' => 'webform_workflow_states',
    'foreign keys' => array(
      'webform_workflow_states' => array(
        'columns' => array(
          'target_id' => 'wsid',
        ),
        'table' => 'webform_workflow_states',
      ),
    ),
    'indexes' => array(
      'target_id' => array(
        0 => 'target_id',
      ),
    ),
    'locked' => 0,
    'module' => 'entityreference',
    'settings' => array(
      'handler' => 'base',
      'handler_settings' => array(
        'behaviors' => array(
          'views-select-list' => array(
            'status' => 0,
          ),
        ),
        'sort' => array(
          'type' => 'none',
        ),
        'target_bundles' => array(),
      ),
      'target_type' => 'webform_workflow_state',
    ),
    'translatable' => 0,
    'type' => 'entityreference',
  );

  return $field_bases;
}