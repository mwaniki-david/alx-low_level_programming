#include <stdio.h>
#include "main.h"
/**
 * puts2 -print every other character
 * @str: string
 *
 * return: nothing
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i) != '\n')
	{
		if (i % 2 ==0)
			putchar(*(str + i));
		i+;
	}
	putchar(10);
}


