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
	va_list arg;
	int flag = 0, counter = 0;

	if (format == NULL)
		return (-1);
	va_start(arg, format);
	while (*format != '\0')
	{
		if (flag == 0)
		{
			if (*format == '%')
				flag = 1;
			_putchar(*format);
		}
		else if (flag == 1)
		{
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(arg, int));
					counter++;
					break;
				case 's':
					{
					char *str = va_arg(arg, char *);

					while (*str)
					{
						_putchar(*str++);
						counter++;
					}
					break;
					}
			}
		}
		flag = 0, format++;
	}
	counter++, va_end(arg);
	return (counter);
}
