<?php
/**
 * @file
 * fga_event_base.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function fga_event_base_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_event_location|node|event|form';
  $field_group->group_name = 'group_event_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '3',
    'children' => array(
      0 => 'group_loc_where',
      1 => 'group_loc_venue',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'formatter' => '',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_event_location|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loc_venue|node|event|form';
  $field_group->group_name = 'group_loc_venue';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_location';
  $field_group->data = array(
    'label' => 'Choose a venue',
    'weight' => '9',
    'children' => array(
      0 => 'field_venue',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Choose a venue',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $export['group_loc_venue|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_loc_where|node|event|form';
  $field_group->group_name = 'group_loc_where';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_event_location';
  $field_group->data = array(
    'label' => 'Enter a location',
    'weight' => '8',
    'children' => array(
      0 => 'field_event_where',
    ),
    'format_type' => 'htab',
    'format_settings' => array(
      'label' => 'Enter a location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'open',
    ),
  );
  $export['group_loc_where|node|event|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_location|node|event|form';
  $field_group->group_name = 'group_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'event';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '4',
    'children' => array(
      0 => 'group_loc_where',
      1 => 'group_loc_venue',
    ),
    'format_type' => 'htabs',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'classes' => '',
      ),
    ),
  );
  $export['group_location|node|event|form'] = $field_group;

  return $export;
}
