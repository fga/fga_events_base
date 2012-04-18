<?php
/**
 * @file
 * fga_event_base.relation_type_default.inc
 */

/**
 * Implements hook_relation_default_relation_types().
 */
function fga_event_base_relation_default_relation_types() {
  $export = array();

  $relation_type = new stdClass();
  $relation_type->disabled = FALSE; /* Edit this to true to make a default relation_type disabled initially */
  $relation_type->api_version = 1;
  $relation_type->relation_type = 'is_invited_to';
  $relation_type->label = 'is invited to';
  $relation_type->reverse_label = 'has invitee';
  $relation_type->directional = 1;
  $relation_type->transitive = 0;
  $relation_type->r_unique = 1;
  $relation_type->min_arity = 2;
  $relation_type->max_arity = 2;
  $relation_type->source_bundles = array(
    0 => 'user:user',
  );
  $relation_type->target_bundles = array(
    0 => 'node:event',
  );
  $export['is_invited_to'] = $relation_type;

  return $export;
}
