# getmousecursor
This is simple mouse cursor reading utility for X11 system. This program reads current mouse cursor image and post it as raw binary data to stdout. It may be useful in some automation systems.
## compilation
gcc -Wall getmousecursor.c -o getmousecursor \`pkg-config --cflags --libs x11 xfixes\`
