#include "nextgen.h"



void nextgen(void *u, int wid, int hei)
{
	unsigned (*univ)[wid] = u;
	unsigned new[hei][wid];
 
	for(int y = 0; y < hei; ++y)
		for (int x = 0; x < wid; ++x){
		int n = 0;
		for (int y1 = y - 1; y1 <= y + 1; y1++)
			for (int x1 = x - 1; x1 <= x + 1; x1++)
				if (univ[(y1 + hei) % hei][(x1 + wid) % wid])
					n++;
 
		if (univ[y][x]) n--;
		new[y][x] = (n == 3 || (n == 2 && univ[y][x]));
	}
	for(int y = 0; y < hei; ++y)
		for(int x = 0; x < wid; ++x)
			univ[y][x] = new[y][x];
}
