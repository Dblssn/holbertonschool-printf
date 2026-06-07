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
	unsigned int positive;

	if (n < 0)
	{
		_putchar('-');
		positive = (unsigned int)(-(n + 1)) + 1;
	}
	else
		positive = (unsigned int)n;
	if (positive >= 10)
	{
		count += help_int((int)(positive / 10));
	}

	num = (positive % 10) + '0';

	count += write(1, &num, 1);

	return (count);
}
