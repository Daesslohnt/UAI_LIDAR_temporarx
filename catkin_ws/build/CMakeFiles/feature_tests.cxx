ts: nocache
Conflicts: findutils (<= 4.2.31-1), slocate (<= 3.1-1.1)
Conffiles:
 /etc/cron.daily/mlocate bdc343beb9e7e8bf5cccaf17ef3d91f4
 /etc/updatedb.conf 4391971a02f16b6b565805799f77dbec
Description: quickly find files on the filesystem based on their name
 mlocate is a new implementation of locate, a tool to find files
 anywhere in the filesystem based on their name, using a fixed pattern
 or a regular expression. Unlike other tools like find(1), locate uses
 a previously created database to perform the search, allowing queries
 to execute much faster. This database is updated periodically from
 cron.
 .
 Several implementations of locate exist: the original implementation
 from GNU's findutils, slocate, and mlocate. The advantages of mlocate
 are:
 .
  * it indexes all the filesystem, but results of a search will only
    include files that the user running locate has access to. It does
    this by updating the database as root, but making it unreadable for
    normal users, who can only access it via the locate binary. slocate
    does this as well, but not the original locate.
 .
  * instead of re-reading all the contents of all directories each time
    the database is updated, mlocate keeps timestamp information in its
    database and can know if the contents of a directory changed without
    reading them again. This makes updates much faster and less demanding
    on the hard drive. This feature is only found in mlocate.
 .
 Installing mlocate will change the /usr/bin/locate binary to point to
 mlocate via the alternatives mechanism. After installation, you may
 wish to run /etc/cron.daily/mlocate by hand to create the database,
 otherwise mlocate won't work until that script is run from cron itself
 (since mlocate does not use the same database file as standard locate).
 Also, you may wish to remove the "locate" package in order not to have
 two different database files updated regularly on your system.
Homepage: https://pagure.io/mlocate
Original-Maintainer: Tollef Fog Heen <tfheen@debian.org>

Package: mobile-broadband-provider-info
Status: install ok installed
Priority: optional
Section: admin
Installed-Size: 510
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: all
Multi-Arch: foreign
Version: 20190618-3
Description: database of mobile broadband service providers
 This package contains a database of provider-specific settings of mobile
 broadband providers in different countries. Its functioning through Network
 Manager makes it easy for users to choose their mobile broadband service
 provider.
 .
 The database contains information relevant to mobile networks access point
 usage, such as APN (access point name), username, password, etc.
Original-Maintainer: Graham Inggs <ginggs@debian.org>
Homepage: https://wiki.gnome.org/Projects/NetworkManager/MobileBroadband/ServiceProviders

Package: modemmanager
Status: install ok installed
Priority: optional
Section: net
Installed-Size: 3940
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Version: 1.16.6-2~20.04
Depends: libc6 (>= 2.14), libglib2.0-0 (>= 2.53.2), libgudev-1.0-0 (>= 212), libmbim-glib4 (>= 1.24.0~), libmbim-proxy, libmm-glib0 (>= 1.16.6), libpolkit-gobject-1-0 (>= 0.99), libqmi-glib5 (>= 1.28.6), libqmi-proxy, libsystemd0 (>= 209)
Recommends: usb-modeswitch
Conffiles:
 /etc/dbus-1/system.d/org.freedesktop.ModemManager1.conf fdea77c0bfcdccbf3499e60941c96f51
Description: D-Bus service for managing modems
 ModemManager is a DBus-activated daemon which controls mobile broadband
 (2G/3G/4G) devices and connections. Whether built-in devices, USB dongles,
 Bluetooth-paired telephones or professional RS232/USB devices with external
 power supplies, ModemManager is able to prepare and configure the modems and
 setup connections with them.
Original-Maintainer: Mathieu Trudel-Lapierre <mathieu.tl@gmail.com>
Homepage: https://www.freedesktop.org/wiki/Software/ModemManager/

Package: mokutil
Status: install ok installed
Priority: optional
Section: admin
Installed-Size: 70
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Version: 0.3.0+1538710437.fb6250f-1
Depends: libc6 (>= 2.14), libefivar1 (>= 37), libssl1.1 (>= 1.1.0)
Description: tools for manipulating machine owner keys
 This program provides the means to enroll and erase the machine owner
 keys (MOK) stored in the database of shim.
Original-Maintainer: Simon Quigley <tsimonq2@debian.org>

Package: mount
Status: install ok installed
Priority: required
Section: admin
Installed-Size: 433
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Multi-Arch: foreign
Source: util-linux
Version: 2.34-0.1ubuntu9.1
Replaces: bash-completion (<< 1:2.1-4.3~)
Depends: util-linux (>= 2.30.1-0ubuntu4~)
Pre-Depends: libblkid1 (>= 2.17.2), libc6 (>= 2.17), libmount1 (>= 2.34), libsmartcols1 (>= 2.33)
Suggests: nfs-common (>= 1:1.1.0-13)
Breaks: bash-completion (<< 1:2.1-4.3~)
Description: tools for mounting and manipulating filesystems
 This package provides the mount(8), umount(8), swapon(8),
 swapoff(8), and losetup(8) commands.
Important: yes
Original-Maintainer: LaMont Jones <lamont@debian.org>

Package: mousetweaks
Status: install ok installed
Priority: optional
Section: gnome
Installed-Size: 208
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Version: 3.32.0-2
Depends: libc6 (>= 2.4), libcairo2 (>= 1.2.4), libglib2.0-0 (>= 2.37.3), libgtk-3-0 (>= 3.0.0), libpango-1.0-0 (>= 1.14.0), libx11-6, libxcursor1 (>> 1.1.2), libxfixes3, libxtst6, dconf-gsettings-backend | gsettings-backend, gsettings-desktop-schemas (>= 0.1.0)
Description: mouse accessibility enhancements for the GNOME desktop
 This package contains a daemon and some panel applets to improve mouse
 usability on the GNOME desktop. These enhancements are:
 .
  * The possibility to click without a button
  * The ability to bring the context menu with a one-button mouse
    (like MacOS does)
  * An area to capture the mouse pointer until it is released with a
    pre-defined key combination.
Original-Maintainer: Debian GNOME Maintainers <pkg-gnome-maintainers@lists.alioth.debian.org>
Homepage: https://wiki.gnome.org/Projects/Mousetweaks

Package: mscompress
Status: install ok installed
Priority: optional
Section: otherosfs
Installed-Size: 45
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Version: 0.4-7
Depends: libc6 (>= 2.4)
Description: Microsoft "compress.exe/expand.exe" compatible (de)compressor
 This package contains two programs:
 .
  * msexpand which decompresses files compressed by the Microsoft
    compress.exe utility (e.g. Win 3.x installation files);
  * mscompress which compresses files using the LZ77 compression
    algorithm.
 .
 Files can be decompressed using Microsoft expand.exe or msexpand(1).
Original-Maintainer: Patrick Matthäi <pmatthaei@debian.org>
Homepage: https://github.com/stapelberg/mscompress

Package: mtools
Status: install ok installed
Priority: optional
Section: otherosfs
Installed-Size: 389
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Multi-Arch: foreign
Version: 4.0.24-1
Depends: libc6 (>= 2.14)
Suggests: floppyd
Conffiles:
 /etc/mtools.conf 659bb18a4490dcb17ad0b0139c2fb654
Description: Tools for manipulating MSDOS files
 Mtools is a collection of utilities to access MS-DOS disks from Unix without
 mounting them. It supports Win'95 style long file names, OS/2 Xdf disks,
 ZIP/JAZ disks and 2m disks (store up to 1992kB on a high density 3 1/2 disk).
 .
 Also included in this package are commands to eject and manipulate the
 write/password protection control of Zip disks.
Original-Maintainer: Chris Lamb <lamby@debian.org>
Homepage: https://www.gnu.org/software/mtools/

Package: mtr-tiny
Status: install ok installed
Priority: optional
Section: net
Installed-Size: 164
Maintainer: Ubuntu Developers <ubuntu-devel-discuss@lists.ubuntu.com>
Architecture: amd64
Source: mtr
Version: 0.93-1
Replaces: mtr
Depends: libc6 (>= 2.29), libncurses6 (>= 6), libtinfo6 (>= 6)
Breaks: mtr, suidmanager (<< 0.50)
Description: Full screen ncurses traceroute tool
 mtr combines the functionality of the 'traceroute' and 'ping' programs
 in a single network diagnostic tool.
 .
 As mtr starts, it investigates the network connection between the host
 mtr runs on and a user-specified destination host.  After it
 determines the address of each network hop between the machines,
 it sends a sequence of ICMP ECHO requests to each one to determine the
 quality of the link to each machine.  As it does this, it prints
 running statistics about each machine.
 .
 mtr-tiny is compiled without support for X and conserves disk space.
Original-Maintainer: Robert Woodcock <rcw@debian.org>
Homepage: http://www.bitwizard.nl/mtr/

Package: muffin
Status: install ok installed
Priority: optional
Section: x11
Installed-Size: 166
Maintainer: Linux Mint <root@linuxmint.com>
Architecture: amd64
Version: 5.0.2+uma
Provides: x-window-manager
Depends: muffin-common (= 5.0.2+uma), zenity, libc6 (>= 2.4), libcairo2 (>= 1.2.4), libgdk-pixbuf2.0-0 (>= 2.22.0), libglib2.0-0 (>= 2.37.3), libgtk-3-0 (>= 3.9.12), libmuffin0, libpango-1.0-0 (>= 1.14.0), libx11-6
Suggests: gnome-themes, xdg-user-dirs
Description: window and compositing manager
 Muffin is a window manager performing compositing as well based on
 GTK+ and Clutter and used in Cinnamon desktop environment.
 .
 This package contains the core binaries.

Package: muffin-common
Status: install ok installed
Priority: optional
Section: misc
Installed-Size: 5090
Maintainer: Linux Mint <root@linuxmint.com>
Architecture: all
Source: muffin
Version: 5.0.2+uma
Depends: dconf-gsettings-backend | gsettings-backend, sgml-base (>= 1.26)
Description: window and compositing manager (data files)
 Muffin is a window manager performing compositing as well based on
 GTK+ and Clu