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
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar (*(str + i));
		i++;
	}
	putchar (10);
}
