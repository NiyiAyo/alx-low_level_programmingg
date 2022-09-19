#include "main.h"
/**
 * swap_int- function thata swaps values of two integers
 * @a: variable 1
 * @b: variable 2
 * @c: variable 3
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
