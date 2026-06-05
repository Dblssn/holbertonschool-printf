#include "main.h"
/**
 *print_integer - print integer
 *@n: integer
 *Return: value
 */
int print_integer(unsigned int n)
{
	int count = 0;
	char num;

	if (n / 10)
	{
		count += print_integer(n / 10);
	}

	num = (n % 10) + '0';

	count += write(1, &num, 1);

	return (count);
}
