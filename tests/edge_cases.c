#include <stdio.h>
#include "main.h"

int main(void)
{
    _printf("%c", '\0');
    printf("%c", '\0');
    _printf("%");
    printf("%");
    _printf("%!\n");
    printf("%!\n");
    _printf("%K\n");
    printf("%K\n");
    return (0);
}
