#include "main.h"
/**
 *_printf - produces output according to a format
 *@format: specifier
 */
int _printf(const char *format, ...)
{
	if (format == NULL)
		return (-1);
