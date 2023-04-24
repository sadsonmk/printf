#include <stdio.h>
#include "main.h"

/**
 * _vprintf - prints a formatted string
 * @args: is the list of arguments
 * @format: pointer to the string
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
					{
					char *str = va_arg(args, char *);
					
					while (*str)
						_putchar(*str++);
					break;
					}

			}

			flag = 0;
		}

		format++;
	}

}

