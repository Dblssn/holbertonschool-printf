#include <limits.h>
#include <stdio.h>
#include "main.h"
int main(void)
{
    _printf("Let's print a simple sentence.\n");
    printf("Let's print a simple sentence.\n");
    _printf("%c", 'S');
    printf("%c", 'S');
    _printf("%s", "This sentence is retrieved from va_args!\n");
    printf("%s", "This sentence is retrieved from va_args!\n");
    _printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    printf("Complete the sentence: You %s nothing, Jon Snow.\n", (char *)0);
    _printf("%d", INT_MIN);
    printf("%d", INT_MIN);
    _printf("%d", INT_MAX);
    printf("%d", INT_MAX);
    _printf("%d", 0);
    printf("%d", 0);
    return (0);
}
