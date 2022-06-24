#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: the string
 * Return: return zero
 *
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
return;
}
else
{
_puts_recursion(s);
_putchar(*s);
}
