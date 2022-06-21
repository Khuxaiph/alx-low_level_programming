#include "main.h"

/**
 * *_memset - To fill memory with a constant byte
 * @s: first value
 * @b: second value
 * @n: third value
 * Return: returns value
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
