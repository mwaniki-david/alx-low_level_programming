#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointers to strings
 *
 * return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

