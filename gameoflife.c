#include <stdlib.h>
#include "game.h"

int main(int argc, char **argv)
{
	system("clear");

	int width = 0, height = 0;

	if (argc > 1)
		width = atoi(argv[1]);
	if (argc > 2)
		height = atoi(argv[2]);
	if (width <= 0)
		width = 30;
	if (height <= 0)
		height = 30;

	game(width, height);
	
	return 0;
}
