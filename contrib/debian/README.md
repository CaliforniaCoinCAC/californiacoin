
Debian
====================
This directory contains files used to package californiacoind/californiacoin-qt
for Debian-based Linux systems. If you compile californiacoind/californiacoin-qt yourself, there are some useful files here.

## californiacoin: URI support ##


californiacoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install californiacoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your californiacoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/californiacoin128.png` to `/usr/share/pixmaps`

californiacoin-qt.protocol (KDE)

