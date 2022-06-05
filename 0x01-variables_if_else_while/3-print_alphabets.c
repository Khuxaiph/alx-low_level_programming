/*big and small alphabets*/
#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char ch;
char up;
for (ch = 'a'; ch <= 'z'; ch++)
{
putchar(ch);
}
for (up = 'A'; up <= 'Z'; up++)
{
putchar(up);
}
putchar('\n');
return (0);
}
