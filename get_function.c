#include "holberton.h"

/**
 * get_print_function - determines which function to use to print
 * @format: how to format output
 * @prints: array of print_t structs
 * @args: va_list of arguments to print
 *
 * Return: number of characters printed
 */
int get_print_function(const char *format, print_t *prints, va_list args)
{
	char current;
	int count = 0, i = 0, j = 0;

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
				if (current == '\0')
					return (-1);
				if (current != '%')
					count += _putchar('%');
				count += _putchar(current);
			}
		}
		else
			count += _putchar(current);
		i++;
		current = format[i];
	}
	return (count);
}
