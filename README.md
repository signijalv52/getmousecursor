# getmousecursor
This is simple mouse cursor reading utility for X11 system. This program reads current mouse cursor image and posts it as raw binary data to stdout. It may be useful in some automation systems with xdotool.
## compilation
gcc -Wall getmousecursor.c -o getmousecursor \`pkg-config --cflags --libs x11 xfixes\`
