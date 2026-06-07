#include "main.h"
/**
 *print_percentage - prints % sign
 *Return: Always 1
 */
int print_percentage(void)
{
	char c = '%';

	return (write(1, &c, 1));
}
