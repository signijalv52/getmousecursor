/*

gcc -Wall getmousecursor.c -o getmousecursor `pkg-config --cflags --libs x11 xfixes`

*/

#include <stdio.h>
#include <stdlib.h> //для getenv
#include <X11/extensions/Xfixes.h>

int main (int argc, char** argv)
{
  Display* display = XOpenDisplay(getenv("DISPLAY"));
  XFixesCursorImage* cur = XFixesGetCursorImage(display);

  //out = freopen(0, "wb", stdout)
  fwrite(cur->pixels, sizeof(unsigned long), cur->width * cur->height, stdout);

  XFree(cur);
  XCloseDisplay(display);
  return 0;
}