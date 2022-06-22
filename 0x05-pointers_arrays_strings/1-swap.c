#include "main.h"

/**
 * swap_int - switch the values of two numbers
 * @a : first digit
 * @b : second digit
 * return : if 0, sucess
 */
void swap_int(int *a, int *b)
{
int c;

	c = *b;
	*b = *a;
	*a = c;
}
