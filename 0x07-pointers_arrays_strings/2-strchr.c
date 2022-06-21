#include "main.h"
/**
 * _strchr - locates a character in a string
 *
 * @s: the xter
 * @c: the xter to find
 *
 * Return: retun positive
 * @s. Return NULL if the character isn't found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
