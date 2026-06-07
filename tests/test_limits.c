#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
    _printf("%d\n", INT_MAX);
    printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MIN);
    printf("%d\n", INT_MIN);
    _printf("%d\n", 0);
    printf("%d\n", 0);
    return (0);
}
