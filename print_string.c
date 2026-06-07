#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_string - prints a string
  * @args: string to print
  *
  * Return:number of characters printed
  *
  */

int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;
	int count = 0;

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		count++;
		i++;
	}

	return (count);
}
