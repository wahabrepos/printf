#include "main.h"
/**
 * _printf - produces output according to a format
 * @format: string to print to stdout
 * Return: the number of characters printed excluding the
 * null byte used to end output to strings
 */
int _printf(const char *format, ...)
{
	va_list arg;
	int flag_count;

	if (format == NULL)
		return (-1);
	va_start(arg, format);

	flag_count = wprint(format, arg);
	va_end(arg);
	return (flag_count);
}
