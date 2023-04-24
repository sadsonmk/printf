#include "main.h"
#include <stdio.h>

/**
 * print_str - prints out a string
 * @str: is the input string
 * Return: the length of the string printed
 */

int print_str(char *str)
{
	int i = 0, counter = 0;

	if (str)
	{
		while (str[i] != '\0')
		{
			_putchar(str[i]);
			counter += 1;
			i++;
		}
	}
	return (counter);
}
