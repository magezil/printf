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
 * print_string_hex - prints a string to output
 * @args: list to retrieve string to print
 *
 * Return: number of chars printed
 */
int print_string_hex(va_list args)
{
	int len;
	int index;
	int div;
	int rem;
	char current;
	char *str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";
	len = 0;
	index = 0;
	current = str[index];
	while (current != '\0')
	{
		if ((current > 0 && current < 32) || current >= 127)
		{
			len += _putchar('\\');
			len += _putchar('x');
			div = current / 16;
			rem = current % 16;
			if (div > 9)
				len += _putchar(div - 10 + 'A');
			else
				len += _putchar(div + '0');
			if (rem > 9)
				len += _putchar(rem - 10 + 'A');
			else
				len += _putchar(rem + '0');
		}
		else
			len += _putchar(str[index]);
		index++;
		current = str[index];
	}
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
