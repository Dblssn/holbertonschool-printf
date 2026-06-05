#include "main.h"
/**
 *handle_specifier - handles format specifiers
 *@specifier: format checker
 *@args: argument
 *
 *Return: number of characters printed, -1 if null
 */
int handle_specifier(char specifier, va_list args)
{
	switch (specifiers)
	{

		case 'c':
			return (print_char(args));

		case 's':
			return (print_string(args));

		case '%':
			return (print_percentage());

		case 'd':
		case 'i':
			return (print_integer(args));

		default:
			return (-1);
	}
}
