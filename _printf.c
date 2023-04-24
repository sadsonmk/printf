#include <stdio.h>
#include "main.h"

/**
 * _printf - produces output according to a format.
 * @format: is a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 *
 */

int _printf(const char *format, ...)
{
	va_list arg;

	int i, count = 0;
	char buffer[BUFFER_SIZE];

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	while (*format != '\0')
	{
		if (*format == '%')
		{
			format++;

			if (*format == 'c')
			{
				count += _putchar(*format);
			}

			else if (*format == 's')
			{
				count += _putchar(*fomat);
			}
		}
		else
		{
			_putchar(*format);
		}
	}
	return (count);


	va_end(arg);
}
