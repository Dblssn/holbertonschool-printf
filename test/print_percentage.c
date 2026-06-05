#include "main.h"
/**
 *print_percentage - prints % sign
 *@percentage_value: integer value
 *Return: Always 1
 */
int print_percentage(int percentage_value)
{
	char c = '%';

	(void)percentage_value;

	return (write(1, &c, 1));
}
