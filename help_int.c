#include "main.h"

/**
 * help_int - prints an integer
 * @n: integer
 * Return: number of characters printed
 */
int help_int(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		count += _putchar('-');
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += help_int(num / 10);

	count += _putchar((num % 10) + '0');

	return (count);
}
