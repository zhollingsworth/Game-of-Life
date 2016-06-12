#include "display.h"
#include <stdio.h>

void display(void *u, int wid, int hei)
{
	int (*univ)[wid] = u;
	printf("\033[H");
	for(int y = 0; y < hei; ++y) {
        	for(int x = 0; x < wid; ++x) 
			printf(univ[y][x] ? /*"\033[07m  \033[m"*/"x" : " " );
		printf("\033[E");
	}
	fflush(stdout);
}
