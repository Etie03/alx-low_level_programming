#include "main.h"
/**
 * swap_int - This function swaps the values of two integers
 *@a: swapped integer
 *@b: swapped integer
 */

void swap_int(int *a, int *b)
{
int d;
d = *a;
*a = *b;
*b = d;
}
