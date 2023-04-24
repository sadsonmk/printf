#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: is a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 */
int _printf(const char *format, ...)
{
	unsigned int b = 0, counter = 0;

	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	for ( ; format[b] != '\0'; b++)
	{
		if (format[b] != '%')
		{
			_putchar(format[b]);
			counter += 1;
		}
		else if (format[b + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			b++;
		}
		else if (format[b + 1] == 's')
		{
			int count = print_str(va_arg(args, char *));

			b++;
			counter += count;
			break;
		}
		else if (format[b + 1] == '%')
		{
			_putchar('%');
			b++;
		}
		counter += 1;
	}

	return (counter);
	va_end(args);
}
