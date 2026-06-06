#include "main.h"

/**
 * help_int - help print integer
 *@n: integer to be printed
 *Return: count of int
 */
int help_int(int n)
{
	int count = 0;
	char num;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n >= 10)
	{
		count += help_int(n / 10);
	}

	num = (n % 10) + '0';

	count += write(1, &num, 1);

	return (count);
}
