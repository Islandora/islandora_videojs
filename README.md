# Islandora Video.js [![Build Status](https://travis-ci.org/Islandora/islandora_videojs.png?branch=7.x)](https://travis-ci.org/islandora/islandora_videojs)

## Introduction

An Islandora viewer module using [Video.js](http://www.videojs.com/).

## Requirements

* [Islandora](https://github.com/islandora/islandora)
* [Tuque](https://github.com/islandora/tuque)
* [Video.js](http://www.videojs.com/downloads/video-js-4.0.0.zip)

## Installation

Install as usual, see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

[Download](http://www.videojs.com/downloads/video-js-4.0.0.zip) and install [video.js](http://www.videojs.com/) to your sites/libraries folder.  

**Note** This viewer has been tested with video.js 4.0.0.

## Configuration

Select the Video.js viewer at Administration » Islandora » Solution pack configuration » Video Solution Pack (admin/islandora/solution_pack_config/video).

[![Configuration](http://i.imgur.com/NhMJY2u.png)](http://i.imgur.com/NhMJY2u.png)

## Troubleshooting/Issues

The Video.js directory must be installed as the directory name "video-js" in the Drupal library directory.  If you see HTTP 404 errors for "//video.js" that means Drupal has not found the "video-js" folder.

HTTP 404 errors for "video.js.map" is a [known issue](http://stackoverflow.com/questions/18407543/video-js-map-throwing-a-404-not-found) (the JavaScript Source Map is not included in the distribution).  You can stop the video.js client from requesting the video.js.map by removing "//@ sourceMappingURL=video.js.map" from the bottom of the video.js file.

Having problems or solved a problem? Check out the Islandora google groups for a solution.

* [Islandora Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora)
* [Islandora Dev Group](https://groups.google.com/forum/?hl=en&fromgroups#!forum/islandora-dev)

## FAQ

## Maintainers/Sponsors
Current maintainers:

* [Nick Ruest](https://github.com/ruebot)
* [Nelson Hart](https://github.com/nhart)

## Development

If you would like to contribute to this module, please check out our helpful [Documentation for Developers](https://github.com/Islandora/islandora/wiki#wiki-documentation-for-developers) info, as well as our [Developers](http://islandora.ca/developers) section on the Islandora.ca site.


## License

[GPLv3](http://www.gnu.org/licenses/gpl-3.0.txt)

**Note** This module requires Video.js. Video.js is licensed under an [Apache2 License](https://github.com/videojs/video.js/blob/master/LICENSE)
