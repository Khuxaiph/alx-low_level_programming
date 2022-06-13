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
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
}
