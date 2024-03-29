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
  $form['islandora_videojs_hls_library'] = array(
    '#type' => 'checkbox',
    '#title' => t('Videojs-contrib-hls library'),
    '#description' => t('Include the videojs-contrib-hls library js, videojs.contrib-hls.js?'),
    '#default_value' => variable_get('islandora_videojs_hls_library', FALSE),
    '#element_validate' => array('islandora_videojs_admin_islandora_videojs_hls_library_validate'),
  );
  $form['islandora_videojs_center_play_button'] = array(
    '#type' => 'checkbox',
    '#title' => t('Center play button'),
    '#description' => t('Put the play button in the center of the player, rather than the top left corner'),
    '#default_value' => variable_get('islandora_videojs_center_play_button', FALSE),
  );
  $form['islandora_videojs_responsive'] = array(
    '#type' => 'checkbox',
    '#title' => t('Responsive player'),
    '#description' => t('Make the videojs player responsive (requires a responsive theme)'),
    '#default_value' => variable_get('islandora_videojs_responsive', FALSE),
  );
  $form['islandora_videojs_transcript_dsid'] = array(
    '#type' => 'textfield',
    '#title' => t('Transcript/Subtitle DSID'),
    '#description' => t('Datastream ID used for transcript/subtitle datastreams.'),
    '#default_value' => variable_get('islandora_videojs_transcript_dsid', 'TRANSCRIPT'),
  );
  return system_settings_form($form);
}

/**
 * Validates the above element.
 */
function islandora_videojs_admin_islandora_videojs_hls_library_validate($element, &$form_state, $form) {
  if ($element['#checked'] === TRUE) {
    $videojs_path = libraries_get_path("video-js");
    $videojshls = $videojs_path . "/videojs-contrib-hls.js";
    if (!file_exists($videojshls)) {
      form_error($element, t('The videojs-contrib-hls.js file can not be found. It can be found <a href = "https://github.com/videojs/videojs-contrib-hls/releases/tag/v3.0.2">here </a>. Place the videojs-contrib-hls.js file in /sites/all/libraries/video-js.'));
      form_set_value($element, $form['islandora_videojs_hls_library']['#checked'] = FALSE, $form_state);
    }
  }
}
