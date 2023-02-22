#include "main.h"
/**
 * print_sign - prints sign of a number,
 * prints + if n is greater than zero
 * prints 0 if n is zero
 * prints - if n is less than zero
 *
 * @c: prints sign of number n
 *
 * Return: 1 if num is +,
 * 0 if n is zero,
 * -1 if n negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('\n'); 
	return (0);
}
