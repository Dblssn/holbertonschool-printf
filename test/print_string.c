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

int print_string (va_list args)
{
	char *s;
	int i = 0;
	int count = 0;

	s = va_arg(args, char*);

	if (s == NULL) 
		s = "(null)";
	
	while (s[i] != '\0')
	{
		_putchar (s[i]);
		count++;
		i++;
	}

return (count);
}
