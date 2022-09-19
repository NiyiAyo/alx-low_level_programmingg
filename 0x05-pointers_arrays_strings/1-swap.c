#include "main.h"
/**
 * swap_int- function thata swaps values of two integers
 * @a: variable 1
 * @b: variable 2
 *
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
