#include "interface.h"



void initialize() {
	initscr();
}

void prtscrn(entityList screen) {
	screenEntity resize = {WIDTH, HEIGHT, 0, ' '};
	_APPEND(screen, resize)
	for(int i = 0; i < screen.elementCount; i++) {
		screenEntity n = _TAKE(screen, i);
		mvaddch(n.y, n.x, n.glyph);
	}
	refresh();
}

