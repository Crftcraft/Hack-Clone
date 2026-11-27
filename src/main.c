#include <stdio.h>
#include <ncurses.h>
#include "interface.h"


int main() {
initialize();
entityList screen = {0, (WIDTH * HEIGHT)};
prtscrn(screen);
getch();
endwin();
return 0;
}
