DOWNLOAD
========

* Rtidcoin [RTID] Source code on github https://github.com/rtidproject/Rtid-core
* Rtidcoin [RTID] Download Releases https://github.com/rtidproject/Rtid-core/releases/
* Algo YeSPoWer 


Useful links
============

* Mining Pool:    http://pool.rtidcoin.com fee 0%. (soon)
* BlockExplorer:  http://explorer.rtidcoin.com/  (soon)

* RoadMap:        http://rtidcoin.com/roadmap/
* Website:        http://rtidcoin.com/

* Twitter:        https://twitter.com/rtid_core
* Telegram   :    http://t.me/rtidcoin
* Telegram/ID:    http://t.me/rtidcoinid


Rtidcoin Core integration/staging tree
=====================================

* Copyright (c) 2020 Rtidcoin Core Developers
* Copyright (c) 2017-2019 Cranepay Core Developers
* Copyright (c) 2009-2018 Bitcoin Core Developers
* Copyright (c) 2013-2017 Dash Developers (DarkGravityWave3)
* Copyright (c) 2014-2018 Alexander Peslyak (YesPoWer Original)

Development tips and tricks
----------------------------

**compiling for debugging**

Run configure with the --enable-debug option, then make. Or run configure with
CXXFLAGS="-g -ggdb -O0" or whatever debug flags you need.

**debug.log**

If the code is behaving strangely, take a look in the debug.log file in the data directory;
error and debugging message are written there.

The -debug=... command-line option controls debugging; running with just -debug will turn
on all categories (and give you a very large debug.log file).

The Qt code routes qDebug() output to debug.log under category "qt": run with -debug=qt
to see it.

**testnet and regtest modes**

Run with the -testnet option to run with "play rtidcoins" on the test network, if you
are testing multi-machine code that needs to operate across the internet.

If you are testing something that can run on one machine, run with the -regtest option.
In regression test mode blocks can be created on-demand; see qa/rpc-tests/ for tests
that run in -regest mode.

**DEBUG_LOCKORDER**

RtidCoin Core is a multithreaded application, and deadlocks or other multithreading bugs
can be very difficult to track down. Compiling with -DDEBUG_LOCKORDER (configure
CXXFLAGS="-DDEBUG_LOCKORDER -g") inserts run-time checks to keep track of what locks
are held, and adds warning to the debug.log file if inconsistencies are detected.


License
-------

Rtidcoin Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.

Development Process
-------------------

The `master` branch is regularly built and tested, but is not guaranteed to be
completely stable. [Tags](https://github.com/rtidproject/Rtid-core/tags) are created
regularly to indicate new official, stable release versions of RtidCoin Core.

Testing
-------

Testing and code review is the bottleneck for development; we get more pull
requests than we can review and test on short notice. Please be patient and help out by testing
other people's pull requests, and remember this is a security-critical project where any mistake might cost people
lots of money.


**Important**: We do not accept translation changes as GitHub pull requests in main repository.

