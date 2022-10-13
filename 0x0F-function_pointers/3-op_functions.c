#include "3-calc.h"

/**
 * op_add -calculating the sum of two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: sum of a and b
 */
int op_add (int a, int b)
{
	return (a + b);
}
/**
 * op_sub -m calculates the difference of two integers
 * @a: first integer
 * @b: second integer
 *
 * return: diference of a nad b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_div - calculates the division of two integers
 * @a: first integer
 * @b: second integer
 *
 * return: results of the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - calculates the reminder of the division of two integers 
 * @a: first integer
 * @b:second integer
 *
 * Return: remainder of a divided b
 */
int op_mod(int a, int b)
{
	return (a % b );
}

