#include "main.h"
/**
 *_printf - produces output according to a format
 *@format: specifier
 *Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0, result;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;

			if (format[i] == '\0')
			{
				va_end(args);
				return (-1);
			}

			result = handle_specifier(format[i], args);

			if (result == -1)
				count += _putchar('%') + _putchar(format[i]);

			else
				count += result;
		}

		else
		{
			count += _putchar(format[i]);
		}

		i++;
	}

	va_end(args);

	return (count);
}
