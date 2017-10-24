#include "holberton.h"


/**
 * printf - print output
 *
 * @format: list types of arguments
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	types_t types[] = {
		{"c", print_character},
		{"s", print_string},
		{"r", print_str_rev},
		{"R", print_rot13),
		{NULL, NULL}
	};

	va_list arguments;
	int count;

	if (format == NULL)
		return (-1);

	va_start(arguments, format);
	count = get_functions(format, types, arguments);
	va_end(arguments);
}
