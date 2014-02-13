<video id="islandora_videojs" class="video-js vjs-default-skin" controls
 preload="auto" width="640" height="264" poster="<?php print $tn; ?>"
 data-setup="{}">
  <?php foreach ($sources as $source): ?>
    <source src="<?php print $source['url']; ?>" type='<?php print $source['mime']; ?>'>
  <?php endforeach; ?>
</video>
