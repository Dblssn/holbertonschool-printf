#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list args);
int print_percentage(void);
int print_integer(va_list args);
int print_char(va_list args);
int handle_specifier(char specifier, va_list args);
int help_int(int n);

#endif
