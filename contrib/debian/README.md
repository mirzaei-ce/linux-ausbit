
Debian
====================
This directory contains files used to package ausbitd/ausbit-qt
for Debian-based Linux systems. If you compile ausbitd/ausbit-qt yourself, there are some useful files here.

## ausbit: URI support ##


ausbit-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install ausbit-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your ausbit-qt binary to `/usr/bin`
and the `../../share/pixmaps/ausbit128.png` to `/usr/share/pixmaps`

ausbit-qt.protocol (KDE)

