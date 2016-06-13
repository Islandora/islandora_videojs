<?php
/**
 * @file
 * Admin callbacks for Islandora Videojs
 */

/**
 * Admin form.
 */
function islandora_videojs_admin($form, &$form_state) {
  // Get settings.
  $form = array();
  $form['hls_library'] = array(
    '#type' => 'checkbox',
    '#title' => t('Videojs-contrib-hls library'),
    '#description' => t('Include the videojs-contrib-hls library js, videojs.contrib-hls.js?'),
    '#default_value' => variable_get('hls_library', FALSE),
    '#element_validate' => array('videojs_hls_validate'),
  );

  return system_settings_form($form);
}

/**
 * Validates the above element.
 */
function videojs_hls_validate($element, $form, &$form_state) {
  if ($element['#checked'] === TRUE) {
    $videojs_path = libraries_get_path("video-js");
    $videojshls = $videojs_path . "/videojs-contrib-hls.js";
    if (!file_exists($videojshls)) {
      form_error($element, t('The videojs-contrib-hls.js file can not be found. It can be found <a href = "https://github.com/videojs/videojs-contrib-hls/releases/tag/v3.0.2">here </a>. Place the videojs-contrib-hls.js file in /sites/all/libraries/video-js.'));
      $form_state['hls_library']['#checked'] = FALSE;
    }
  }
}
