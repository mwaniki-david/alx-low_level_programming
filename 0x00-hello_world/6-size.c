#include <stdio.h>
/**
 * main - print the string in the put function
 *
 * Description:use the main function
 * this program prints "programming is like building a multilingual puzzle"
 * Return: 0;
 */
int main(void)
{	
	char c;
	int i;
	long  li;
	long long lli;
	float f;

	printf("size of a char: %lld byte(s)\n", sizeof(c));
	printf("size of an int: %lld byte(s)\n", sizeof(i));
	printf("size of a long int: %lld byte(s)\n", sizeof(li));
	printf("size of a long long int: %lld byte(s)\n", sizeof(lli));
	printf("size of a float: %lld byte(s)\n", sizeof(f));
	return (0);
}

