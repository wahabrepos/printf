#include "main.h"
int print_c(va_list);
int print_s(va_list);

/**
 * print_c- prints a char
 * @arg: char to be printed
 * Return: char
 */
int print_c(va_list arg)
{
	_putchar(va_arg(arg, int));

	return (1);
}

/**
 * print_s - print string
 * @arg: string to be printed
 * Return: string
 */
int print_s(va_list arg)
{
	int strlen;
	char *s;

	s = va_arg(arg, char *);

	if (s == NULL)
	{
		s = "";
	}
	strlen = _strlen(s);
	if (s)
	{
		_putchar(*s);
	}
	return (strlen);
}
