#include <stdio.h>

void __attribute__ ((constructor)) calledFirst();

/**
 * calledFirst - function to be called before main
 */
void calledFirst()
{
    printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
