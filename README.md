# Welcome to Superchat

Hi! This program is a command line based chat program. This was built for Software Engineering class (CSE 3310).

# Before you compile

 1. Ensure you computer supports the gcc compiler
 2. You need to ensure that you have the [C++ Boost Library](https://www.boost.org/doc/libs/1_61_0/more/getting_started/unix-variants.html) installed and the [ncurses library](https://www.cyberciti.biz/faq/linux-install-ncurses-library-headers-on-debian-ubuntu-centos-fedora/) installed
 3. Install the [asio library](https://sourceforge.net/projects/asio/files/asio/1.12.2%20%28Stable%29/) into your home directory

## Getting it started

Ensure that you have many terminal windows open

To Compile: `make` \
To Start server: `./chat_server <port>` \
To Start client: `./chat_client <ip address> <port>` 

##  Basic Maneuvering

- Move using arrow keys.
- To enter information into a box and select a certain entry box arrow to the box you want to select and then hit Enter/Return.
 - To leave the entry box hit Enter/Return again. 


## Misc
 - To transfer files type this in the chat message box: `!@!send_file:filename` and then hit enter
	 - Currently the file size is restricted to 256 characters.
	 - The files transferred must be in Home directory
	 - All received files will be downloaded in Home directory
