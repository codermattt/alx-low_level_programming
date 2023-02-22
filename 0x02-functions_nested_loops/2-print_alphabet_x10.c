#include "main.h"
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times per line
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	char x;

	char y = 0;

	while (y <= 9)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);	
		}
		_putchar('\n');
		y++;
	}
}
