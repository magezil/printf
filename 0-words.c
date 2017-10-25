#include "holberton.h"


/**
 * print_char - print character
 *
 * @arguments: structure definitions
 * Return: number of characters
 */
int print_char(va_list arguments)
	return(_putchar(va_list(arguments, int)));

/**
 * print_string - print string
 *
 * @arguments: list of strings
 * Return: number of characters
 */
int print_string(va_list arguments)
{
	char *str;

	str = va_list(arguments, char *);

	if (str == NULL)
		str = ("null");

	return(_putchar(va_list(arguments, int)));
}
