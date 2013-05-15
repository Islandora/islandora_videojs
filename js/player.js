jQuery(document).ready(function() {
  videojs("mediaplayer").setup({
    file: Drupal.settings.islandora_videojs.url,
    image: Drupal.settings.islandora_videojs.thumbnail
  });
});
