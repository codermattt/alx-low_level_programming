#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 *
 * @r - input number as integer
 *
 * Return: last digit
 */
int print_last_digit(int r)
{
	int n;

	n = r % 10;

	if (n < 0)
	{
		_putchar(-n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
