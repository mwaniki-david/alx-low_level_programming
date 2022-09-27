#include "main.h"
#include <stdio.h>
/**
 * simple_print_buffer - prints buffer in hexa
 *  @buffer: the address of memory to print
 *  @size: the size of the memory to print
 *
 *  Return: Nothing.
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;
	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}


