#include "main.h"

/**
 * swap_int - switch the values of two numbers
 * @a : first digit
 * @b : second digit
 * return : if 0, sucess
 */
void swap_int(int *a, int *b)
{
a = 98;
b = 42;
putchar("a=%d, b=%d\n", a, b);
swap(&a, &b);
putchar("a=%d, b=%d\n", a, b);
return (0);
}
