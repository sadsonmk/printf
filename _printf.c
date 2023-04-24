#include <stdio.h>
#include "main.h"


/**
 * _vprintf - prints a formatted string
 * @args: is the list of arguments
 * Return: void
 */
void _vprintf(const char *format, va_list args)
{
	int flag = 0;

	while (*format)
	{
		if (flag == 0)
		{
			if (*format == '%')
				flag = 1;
			else
				_putchar(*format);
		}
		else if (flag == 1)
		{
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(args, int));
					break;
				case 's':
					const char *str = va_arg(args, char *);

					while (*str)
						_putchar(*str++);
					break;

			}

			flag = 0;

		format++;
	}

}


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

	int i, counter = 0;
	char buffer[BUFFER_SIZE];

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	_vprintf(format,arg);
	counter++;

	return (counter);

	va_end(arg);
}
