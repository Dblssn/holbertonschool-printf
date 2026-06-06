#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
  * print_char - prints a character
  * @args: character to print
  *
  * Return: always 1
  */

int print_char(va_list args)

{
	char a = va_arg(args, int);

	_putchar(a);

	return (1);
}
