#ifndef INTERFACE_H
#define INTERFACE_H
#include <ncurses.h>
#define _LOG(a) do { printf(a); } while (0);
#define _APPEND(a, b) do { a.elements[(a.elementCount++)] = b; } while (0);
#define _TAKE(a, b) a.elements[b]
#define WIDTH 79
#define HEIGHT 20


typedef struct {
	int x;
	int y;
	int id;
	char glyph;
} screenEntity;

typedef struct {
	unsigned int elementCount;
	unsigned int elementMax;
	screenEntity elements[(WIDTH * HEIGHT)];
} entityList;

void prtscrn(entityList);
void initialize(); // function to setup ncurses settings. 
void windowing();  // function to setup windows

#endif
