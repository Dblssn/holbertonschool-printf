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
	char *str;

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
					_putchar(va_arg(args, int));
					count++;
					break;

				case 's':
					str = va_arg(args, char*);
					if (str == NULL)
						str = "(null)";

					while (*str)
					{
						_putchar(*str);
						str++;
						count++;
					}
					break;

				case '%':
					_putchar('%');
					count++;
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
