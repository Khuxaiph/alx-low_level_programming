#include "main.h"
/**
 * _memcpy - Copies memory area
 *
 * @dest: where to copy the memory to
 * @n: number of bytes
 * @src: memory area to copy
 *
 * Return: a pointer to @dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
