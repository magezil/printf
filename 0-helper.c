#include <unistd.h>
#include "holberton.h"

/**
 * print_char - prints a char to output
 * @args: list to retrieve char to print
 *
 * Return: number of chars printed (1)
 */
int print_char(va_list args)
{
	return (_putchar(va_arg(args, int)));
}

/**
 * print_string - prints a string to output
 * @args: list to retrieve string to print
 *
 * Return: number of chars printed
 */
int print_string(va_list args)
{
	int len;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;
	while (str[len] != '\0')
		len += _putchar(str[len]);
	return (len);
}

/**
 * _putchar - prints given character
 * @c: character to print
 *
 * Return: number of characters printed, -1 if error
 */
int _putchar(char c)
{
	/* write returns number of characters it prints */
	return (write(1, &c, 1));
}
