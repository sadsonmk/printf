#include <stdio.h>
#include "main.h"

void print_buffer(char buffer[], int *buffer_index);

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

	int i = 0, counter = 0, buffer_index = 0;

	char buffer[BUFFER_SIZE];

	if (format == NULL)
		return (-1);

	va_start(arg, format);

	if (format)
	{
		while (*format != '\0')
		{
			if (format[i] != '%')
			{
				buffer[buffer_index] = format[i];
				if (buffer_index == BUFFER_SIZE)
					_vprintf(buffer, arg);
				counter++;
			}
			else
			{
				_vprintf(buffer, arg);
				counter++;
			}

			format++;
		}
	}
	_vprintf(buffer, arg);
	va_end(arg);

	return (counter);
}

/**
 * print_buffer - prints what is in the buffer
 * @buffer: the temporary storage in memory
 * which is an array of characters
 * @buffer_index: is the length
 */

void print_buffer(char buffer[], int *buffer_index)
{
	if (*buffer_index > 0)
		write(1, &buffer[0], *buffer_index);

	buffer_index = 0;
}
