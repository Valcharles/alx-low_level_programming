#include "main.h"

/**
 * prime_func - main - check
 * @a: input
 * @b: power
 * Return: Always 0
 */

int prime_func(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_func(a, b  + 1));
}
/**
 * is_prime_number - main code
 * @n: number
 * Return: Always 0
 */

int is_prime_number(int n)
{
	return (prime_func(n, 2));
}
