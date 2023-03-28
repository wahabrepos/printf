#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct format_print - args passed to the function
 * @c: char specifier
 * @print_fmt:function pointer
 */
typedef struct format_print
{
	char c;
	int (*print_fmt)(va_list);
} format_p;
int _printf(const char *format, ...);
int wprint(const char *format, va_list arg);
int (*get_func(char s))(va_list arg);
int print_c(va_list arg);
int print_s(va_list arg);
int _strlen(char *s);
int _putchar(char c);
#endif
