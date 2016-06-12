#include "game.h"
#include "nextgen.h"
#include "display.h"
#include <stdlib.h>
#include <unistd.h>

void game(int wid, int hei)
{
	unsigned univ[hei][wid];
	for(int x = 0; x < wid; ++x) {
		for (int y = 0; y < hei; ++y)	
			univ[y][x] = rand() < RAND_MAX / 10 ? 1 : 0;
	}
	while (1) {
		display(univ, wid, hei);
		nextgen(univ, wid, hei);
		usleep(200000);
	}
}
