#include <stdio.h>
#include "main.h"
int main(void)
{
    _printf("%d\n", 42);
    printf("%d\n", 42);
    _printf("%d\n", -762534);
    printf("%d\n", -762534);
    _printf("%i\n", 100);
    printf("%i\n", 100);
    return (0);
}
