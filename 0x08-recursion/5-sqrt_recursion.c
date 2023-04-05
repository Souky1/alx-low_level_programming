#include"main.h"

/**
 * number - finds the square root
 * @n: natural number
 * @b: square root
 * Return: square root not natural -1
 */
int number(int n, int b)
{
	if (n * n == b)
		return (n);
	if (n == b)
		return (-1);
	return (1 * number(n + 1, b));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: n natural number
 * Return: -1 if not exist
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
