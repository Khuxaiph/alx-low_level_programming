#include <stdio.h>
#include "main.h"
/**
* num - printing a to z,
* with increment
* hopefully it works
* Return: Always 0 (sucess)
*/
int num(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
