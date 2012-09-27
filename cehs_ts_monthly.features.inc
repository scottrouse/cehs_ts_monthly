<?php
/**
 * @file
 * cehs_ts_monthly.features.inc
 */

/**
 * Implements hook_node_info().
 */
function cehs_ts_monthly_node_info() {
  $items = array(
    'ts_monthly' => array(
      'name' => t('Monthly Timesheet'),
      'base' => 'node_content',
      'description' => t('This is the standard timesheet for employees on a Monthly Payroll schedule.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
