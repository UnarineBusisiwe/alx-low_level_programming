#include "main.h"
#include <stdio.h>

int _sqrt_recursion(int n, int i)

/**
 * _sqrt_recursion- returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n, int i)
{
	return (_sqrt(n, 1));
}

/**
 * actual_sqrt_recursion - Returns the natural square root of a
 * @n: number to calculate the natural square root
 * @i: iterate number
 *
 * Return: the natural square root
 */
int _sqrt_recursion(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
