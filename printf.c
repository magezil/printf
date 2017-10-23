#include <stdarg.h>
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
	int count = 0, i = 0, j = 0;
	print_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_number},
		{"d", print_number},
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
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
				if (current != '%')
					count += _putchar('%');
				/* TODO: check for ' ' after %*/
				count += _putchar(current);
			}
		}
		else
			count += _putchar(current);
		i++;
		current = format[i];
	}
	va_end(args);
	return (count);
}
