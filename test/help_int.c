#include "main.h"

/**
 * help_int - help print every integer
 * @n: integer to be printed
 * Return: count
 */
int help_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n >= 10)
		count += help_int(n / 10);

	_putchar('0' + n % 10);
	count++;
	return (count);
}
