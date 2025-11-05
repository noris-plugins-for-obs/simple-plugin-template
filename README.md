# Plugin template for OBS Studio

## Features

This is a template of our plugins for OBS Studio.

Major differences from [obs-plugintemplate](https://github.com/obsproject/obs-plugintemplate) are
- Smaller code size
- Faster build time on CI
- Supporting multiple OBS Studio versions
- Provide PPA for Ubuntu and COPR for Fedora packaging files (work in progress)

## Configuring for your new plugin

- Search `TODO` in the code, and edit each occurence.
- Adjust `LICENSE` if necessary.
- Rewrite `README.md`
- For PPA and COPR,
  - Search `simple-plugin-template` and edit each occurence.
  - Adjust `packaging/debian/copyright` if necessary.
  - Edit `packaging/fedora/obs-studio-plugin-simple-template.spec` and rename it.

## Building on GitHub Actions

You need these secrets to sign and notarize your binary code for macOS.
- `MACOS_SIGNING_APPLICATION_IDENTITY`
- `MACOS_SIGNING_INSTALLER_IDENTITY`
- `MACOS_SIGNING_CERT`
- `MACOS_NOTARIZATION_USERNAME`
- `MACOS_NOTARIZATION_PASSWORD`
- `MACOS_SIGNING_CERT_PASSWORD`
