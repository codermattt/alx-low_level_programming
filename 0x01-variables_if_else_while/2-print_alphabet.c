#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 * ctype.h header above is for tolower functon
 * tolower function converts the x variable storing uppercase letters to lowercase letters
 * single quotes around A and Z is for literals: literals are actual letters to be printed to stdout
 * Return: Always 0 (Success)
 */
int main(void)
{
	char x;

	for (x = 'A'; x <= 'Z'; x++)
	{
		char lower = tolower(x);

		putchar(lower);
	}
	putchar('\n');
	return (0);
}


