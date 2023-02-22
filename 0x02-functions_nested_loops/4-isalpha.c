#include "main.h"
/**
 * isalpha - shows 1 if input is a letter, in
 * uppercase or lowercase, shows 0 if other
 * 
 * @c The character in ASCII code
 * 
 * Return: 1 if c is a letter of lowercase/uppercase
 * or 0 if other
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
