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

	int counter = 0;


	if (format == NULL)
		return (-1);

	va_start(arg, format);

	_vprintf(format, arg);
	counter++;

	va_end(arg);

	return (counter);
}
