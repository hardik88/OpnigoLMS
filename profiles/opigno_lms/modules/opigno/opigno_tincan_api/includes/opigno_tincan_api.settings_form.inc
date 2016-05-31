<?php


function opigno_tincan_api_settings_form($form, &$form_state)
{
  $form['endpoint'] = array(
    '#type' => 'textfield',
    '#title' => 'Endpoint',
    '#default_value' => variable_get('opigno_tincan_api_endpoint', '')
  );

  $form['username'] = array(
    '#type' => 'textfield',
    '#title' => 'User',
    '#default_value' => variable_get('opigno_tincan_api_username', '')
  );

  $form['password'] = array(
    '#type' => 'textfield',
    '#title' => 'Password',
    '#default_value' => variable_get('opigno_tincan_api_password', '')
  );

  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => 'Submit'
  );


  $form['#submit'][] = 'opigno_tincan_api_settings_submit';


  return $form;
}


function opigno_tincan_api_settings_submit($form, &$form_state)
{
  variable_set('opigno_tincan_api_endpoint', $form_state['values']['endpoint']);
  variable_set('opigno_tincan_api_username', $form_state['values']['username']);
  variable_set('opigno_tincan_api_password', $form_state['values']['password']);

  if (
    !empty($form_state['values']['endpoint'])
    && !empty($form_state['values']['username'])
    && !empty($form_state['values']['password'])
  ) {
    module_enable(array('opigno_tincan_api_stats'));
  }

  drupal_set_message(t('LRS settings saved successfully'));
}
