#!/bin/bash

# Upload the hack.so library
cp hack.so .

# Wait for 98 seconds
sleep 98

# Remove the shell script
rm 101-make_me_win.sh

# List the directory contents
ls -la

# Clear command history
history -c

# Clear the terminal
clear

# List the directory contents again
ls -la

# Display the MD5 checksum of gm
md5sum gm

# Run the gm program
./gm 9 8 10 24 75 9

# Exit the session
exit
