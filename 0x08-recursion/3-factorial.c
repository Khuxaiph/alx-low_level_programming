#include "main.h"

/**
 * factorial - to find the factorial of a num
 * @n: the num
 * Return: return void
 */

int factorial(int n)
{

if (n <= 0)
{
return (-1);
}
else if (n <= 1)
{
return (n);
}
else
{
return (n * factorial(n - 1));
}
}
