#include "main.h"
/**
* print_last_digit - assigns a random number to int n everytime
* it executes, and prints it
* @int: int is an integer
* Return: return a digit
*/
int print_last_digit(int)
{
int n;
int last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (last > 0)
printf("Last digit of %i is %i and is greater than 5\n", n, last);
else if (last == 0)
printf("Last digit of %i is %i and is 0\n", n, last);
else if (last < 0)
printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
return (0);
}
