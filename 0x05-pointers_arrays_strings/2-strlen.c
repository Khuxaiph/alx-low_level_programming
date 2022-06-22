#include "main.h"

/**
 *_strlen - length of the string
 * @s: a character
 *Return: the return result
 */

int _strlen(char *s)
{
int i = 0;

	while (s[i] != '\0')
		i++;

	return (i);
}
