#include "main.h"
#include <stdio.h>
/**
 * main - check code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = _abs(1);
	printf("%d\n", a);
	a = _abs(0);
	printf("%d\n", a);
	a = _abs(1);
	printf("%d\n", a);
	a = _abs(-98);
	printf("%d\n", a);
	return (0);
}
