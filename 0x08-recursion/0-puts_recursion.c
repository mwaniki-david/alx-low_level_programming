#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion -prints's a string followed by a line
 * @s:string to be printed
 *
 * return :(void)
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}
}
