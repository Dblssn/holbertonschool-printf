#include "main.h"

/**
 * print_integer - print every integer
 * @args: va_list with integer to be printed
 * Return: count
 */
int print_integer(va_list args)

{
	int a = va_arg(args, int);

	return (help_int(a));
}
