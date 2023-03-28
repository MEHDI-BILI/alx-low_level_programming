#include "main.h"

/**
 *swap_int - swap values
 *@a: 1st value
 *@b: 2nd value
 */

void swap_int(int *a, int *b)

{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
