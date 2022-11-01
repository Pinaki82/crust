#!/bin/bash

# Add MSYS2 to Windows Explorer R-Click Context Menu:
# https://github.com/njzhangyifei/msys2-mingw-shortcut-menus
# cd ~/
# git clone https://github.com/njzhangyifei/msys2-mingw-shortcut-menus
# cd ~/msys2-mingw-shortcut-menus/
# ./install
# cd ~/
# rm -rf ~/msys2-mingw-shortcut-menus/

# R-click -> MinGW 64 Bash Here
# ./runc-msys2x64.sh

# Type the first ten words and press TAB.
# Bash will fill the complete command
# ./runc-msys2x64.sh for you.

# NOTE: The build process will fail if you try
#       any other MSYS2 shell
#       than the "MSYS2 MinGW 64-bit" Bash Shell.
# You'll need the MSYS2 Right-click "Bash-here" Shortcut.

cd code
cd testbed
cd target
cmake -G "MinGW Makefiles" ..

# [Fish:]
# make -j (nproc)
# [Bash:] // https://stackoverflow.com/questions/15289250/using-make-with-j4-or-j8

# -j2 if your PC has two cores.
mingw32-make -j4
./testbed.exe

cargo run

cd ../../../
