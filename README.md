# Islandora Video.js [![Build Status](https://travis-ci.org/Islandora/islandora_videojs.png?branch=7.x)](https://travis-ci.org/islandora/islandora_videojs)

## Introduction

An Islandora viewer module using [Video.js](http://www.videojs.com/). It can play mpeg (audio) and mp4 (video) datastreams.

## Requirements

* [Islandora](https://github.com/islandora/islandora)
* [Tuque](https://github.com/islandora/tuque)
* [Video.js](http://www.videojs.com/)

## Installation

[Download](https://github.com/videojs/video.js/releases/download/v5.10.2/video-js-5.10.2.zip) and install the [video.js](http://www.videojs.com/) library to your sites/all/libraries folder, or run `drush videojs-plugin`. 

Install this module as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Configuration

Enable the Video.js viewer as the default viewer for a solution pack that uses audio or video datastreams. The
 Audio Solution Pack and the Video Solution Pack can work with Video.js.

For example, at **Administration » Islandora » Solution pack configuration » Video Solution Pack** (_admin/islandora/solution_pack_config/video_).

![Solution Pack Configuration](https://user-images.githubusercontent.com/2738244/40234143-b0c31ea6-5a73-11e8-9e3b-8133917d496c.png)

Configure Video.js at **Administration » Islandora » Islandora Viewers » Video.js** (_admin/islandora/islandora_viewers/videojs_). 
Three options are available:

* "Videojs-contrib-hls library" to enable HTTP Live Streaming (a streaming format native to mobile phones).
* "Center play button" to put the play button in the center of the player, rather than the top left corner.
* "Responsive player" to make the Video.js player responsive but requires you use a responsive theme.

![Configuration](https://user-images.githubusercontent.com/1943338/32968854-2575fc40-cbb9-11e7-9e85-66fec561a24c.png)

## Notes

* This viewer has been tested with video.js 5.10.2.
* If you use the Drush command, it is advisable to _move_ (not copy) the install script to your `.drush` folder and run it.

## Documentation

Further documentation for this module is available at [our wiki](https://wiki.duraspace.org/display/ISLANDORA/Islandora+Video.js).

## Troubleshooting/Issues

Video.js must be installed in the Drupal library directory (e.g. sites/all/libraries) in a folder named
"video-js".  If you see HTTP 404 errors for "//video.js" that means Drupal has not found the "video-js" folder.

With some versions of the Video.js library, you may encounter HTTP 404 errors for "video.js.map". This  is a
[known issue](http://stackoverflow.com/questions/18407543/video-js-map-throwing-a-404-not-found) (the JavaScript Source
Map was not included in the distribution). You can stop the video.js client from requesting the video.js.map by removing
 "//@ sourceMappingURL=video.js.map" from the bottom of the video.js file, or by updating to Video.js 5.10.2 (the source
 map is part of that distribution).

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## Maintainers/Sponsors
Current maintainers:

* [Nelson Hart](https://github.com/nhart)

## Development

If you would like to contribute to this module, please check out [CONTRIBUTING.md](CONTRIBUTING.md). In addition, we have helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the [Islandora.ca](http://islandora.ca) site.

## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)

**Note** This module requires Video.js. Video.js is licensed under an [Apache2 License](https://github.com/videojs/video.js/blob/master/LICENSE)
