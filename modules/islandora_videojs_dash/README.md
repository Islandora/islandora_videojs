# Islandora Video.js MPEG-Dash support

## Introduction

Adds MPEG-Dash support to the islandora_videojs module via the videojs-contrib-dash.js plugin.

## Requirements

* [Islandora Video.js](https://github.com/islandora/islandora_videojs)
* [Video.js](https://github.com/videojs/video.js/releases/download/v5.10.2/video-js-5.10.2.zip)
* [Libraries](https://www.drupal.org/project/libraries)
* [videojs-contrib-dash](https://github.com/videojs/videojs-contrib-dash/releases) will also need to be installed as a library, which also requires `dash.all.min.js`; no specific version is targeted, though this module was built against `dash.js` *2.6.2* and `videojs-contrib-dash` *2.9.2*

## Installation

Before enabling the module, the [dash.all.min.js](http://reference.dashif.org/dash.js/nightly/dist/dash.all.min.js) and [videojs-contrib-dash.min.js](https://github.com/videojs/videojs-contrib-dash/releases) plugins should be placed in a folder called `videojs-contrib-dash` in your site's libraries folder.

After that, enable the module as usual; see [this](https://drupal.org/documentation/install/modules-themes/modules-7) for further information.

## Troubleshooting/Issues

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
