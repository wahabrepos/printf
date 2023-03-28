#include "main.h"
/**
 * wprint - helps _printf function to output the desired
 * result
 * @format: string
 * @arg: list of arguments
 * Return: number of characters printed
 */
int wprint(const char *format, va_list arg)
{
	int i, flagCount;
	int (*ptr_getfunc)(va_list);

	flagCount = 0;
	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '%')
			{
				flagCount += _putchar(format[i]);
				i++;
			}
			ptr_getfunc = get_func(format[i + 1]);
			if (ptr_getfunc != NULL)
			{
				flagCount += ptr_getfunc(arg);
				flagCount += _putchar(format[i] + _putchar(format[i + 1]));
				i++;
			}
		}
		else
		{
			_putchar(format[i]);
			flagCount++;
		}
	}
	return (flagCount);
}
