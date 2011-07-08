#include "init.h"

void init_frame (void)
{
    pixel pixel;
    int i, j;

    for (i=0; i<1000; i++)
	for (j=0; j<1000; j++)
	{
	    pixel.red = 0;
	    pixel.green = 0;
	    pixel.blue = 0;
	    pixel.alpha = 0;
	    
	    frame[i][j] = pixel;
	}
}
