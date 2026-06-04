#include "main.h"
/**
 *print_char - print a character
 *@args: argument
 *Return: return value
 */
int print_char(va_list args)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
		_putchar(c);
		_putchar('\n');

}
