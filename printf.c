#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * _printf - prints output according to a given format
 * @format: how to format output
 * @...: list of arguments to print
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list args;
	char current;
	int count = 0;
	int i = 0;
	int j = 0;
	print_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{NULL, NULL}
	};

	if (format == NULL)
		return (0);
	va_start(args, format);
	current = format[i];
	while (current != '\0')
	{
		if (current == '%')
		{
			j = 0;
			i++;
			current = format[i];
			while (prints[j].type != NULL && current != *(prints[j].type))
				j++;
			if (prints[j].type != NULL)
				count += prints[j].f(args);
			else
			{
				count += _putchar('%');
				count += _putchar(current);
			}
		}
		else
		{
			count += _putchar(current);
		}
		i++;
		current = format[i];
	}
	return (count);
}

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
	len = _strlen(str);
	write(1, str, len);
	return (len);
}

/**
 * _strlen - gets length of a string
 * @str: string to compute length of
 *
 * Return: length of string
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * _putchar - prints given character
 * @c: character to print
 *
 * Return: number of characters printed, -1 if error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
