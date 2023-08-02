#include "main.h"
/**
 * factors - finds the factors of a number.
 * @n: input number.
 * @x: iterator.
 * Return: the factors of n.
 */
int factors(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (0 + factors(n, x + 1));
}
