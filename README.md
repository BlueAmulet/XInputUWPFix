# XInputUWPFix

Disables the use of a game controller to navigate UWP applications. This program installs a Low Level Keyboard Hook to filter out keyboard events with VK Codes between 0xC3 and 0xDA.

Download the latest release [here](https://github.com/BlueAmulet/XInputUWPFix/releases/latest)

Disclaimer: Due to the use of a global hook, antivirus or anti-cheat software may complain about the use of this program. I am not responsible for any issues or damages that may result from the use of this program.

## Installation

A `install.bat` and `uninstall.bat` file is provided to add/remove the program to run on startup.

## Building

This program is designed to be built with Visual Studio 2022. Open a `x64 Native Tools Command Prompt` and run `build.bat`

The linker options used are designed to make the exe small.
