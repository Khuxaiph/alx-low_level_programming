#include "main.h"
/**
 * print_line - to print a straight line using the syntax putchar
 * @n: hold the line
 * Return: return 0 if successful
 * void print_line(int n): it is one ofthe xters i am to use
*/
void print_line(int n)
{
int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
