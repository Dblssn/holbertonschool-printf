#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_string - prints a string
  * @str: string to print
  *
  * Return:number of characters printed
  *
  */

int print_string(char *str)
{
	va_list args;
	int i = 0;
	int count = 0;

	str = va_arg(args, char *);

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
