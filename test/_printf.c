#include "main.h"
/**
 *_printf - produces output according to a format
 *@format: specifier
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			switch (format[i])
			{
				case 'c':
					count += print_char(args);
					break;

				case 's':
					count += print_string(args);
					break;

				case 'd':
				case 'i':
					count += print_integer(args);
					break;

				case '%':
					_putchar('%');
					count++;
					break;

				default:
					_putchar('%');
					_putchar(format[i]);
					count += 2;
					break;
			}
		}

		else
		{
			_putchar(format[i]);
			count++;
		}

		i++;
	}

	va_end(args);
	return (count);
}
