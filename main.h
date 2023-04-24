#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

#define BUFFER_SIZE 1024

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 * Return: On success 1
 * On error -1 is returned
 */
int _putchar(char c);


/**
 * _printf - produces output according to a format.
 * @format: is a character string
 * Return: the number of characters printed
 * (excluding the null byte used to end output to strings)
 *
 */

int _printf(const char *format, ...);

/**
 * _vprintf - prints a formatted string
 * @args: is the list of arguments
 * @format: pointer to an array of chars
 * Return: void
 */
void _vprintf(const char *format, va_list args);


/**
 * print_buffer - prints what is in the buffer
 * @buffer: the temporary storage in memory
 * which is an array of characters
 * @buffer_index: is the length
 */

void print_buffer(char buffer[], int *buffer_index);

#endif /* main.h */
