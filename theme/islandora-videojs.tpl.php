<video id="islandora_videojs" <?php if (!$responsive): ?>width="640" height="360"<?php endif; ?>
  <?php if (!$center_play_button): ?>class="video-js vjs-default-skin"
  <?php else: ?>class="video-js vjs-default-skin vjs-big-play-centered" <?php endif; ?>
    controls
  preload="auto"
  <?php if (isset($tn)): ?>
    poster="<?php print $tn; ?>"
  <?php endif; ?>
  <?php if ($responsive): ?>
    data-setup='{"fluid": true}'
  <?php else: ?>
    data-setup="{}"
  <?php endif; ?>
  >
  <?php foreach ($sources as $source): ?>
    <source src="<?php print $source['url']; ?>" type='<?php print $source['mime']; ?>'>
  <?php endforeach; ?>
</video>
<?php if (empty($sources)): ?>
  <div id="video-js-warning">
    No video sources available.
  </div>
<?php endif; ?>
