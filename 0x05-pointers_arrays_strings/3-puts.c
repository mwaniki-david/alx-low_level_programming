#include "main.h"
/**
 * _pusts-prints a string
 * @str: string to print
 *
 * Description: print a screen
 * on success:return no error
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
