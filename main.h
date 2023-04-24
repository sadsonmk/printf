#ifndef MAIN_H
#define MAIN_H

/* standard library */
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/* function prototypes */

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
 * print_str - prints out a string
 * @str: is the input string
 * Return: the length of the string printed
 */

int print_str(char *str);

#endif /* main.h */
