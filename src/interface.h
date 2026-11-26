#ifndef INTERFACE_H
#define INTERFACE_H

typedef struct screenentity {
	int x;
	int y;
	int id;
	char glyph;
} screenentity;


void initialize(); // function to setup ncurses settings. 
void windowing();  // function to setup windows

#endif
