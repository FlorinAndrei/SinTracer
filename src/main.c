#include <config.h>
#include <stdio.h>

#include <popt.h>

#include "init.h"

/* hello */
          
int main (int argc, char **argv)
{
    puts ("Hello World!");
    puts ("This is " PACKAGE_STRING ".");
    
    puts("Initializing background (empty cosmos, black)...");
    init_frame();
    puts("...done!");
    
    printf("Quick test, result should be 0 (darkness):\n");
    printf("red pixel at (0,0) is: %d\n", frame[0][0].red);

    return 0;
}
