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
	int count = 0;
	print_t prints[] = {
		{"c", print_char},
		{"s", print_string},
		{"i", print_number},
		{"d", print_number},
		{"b", print_binary},
		{"u", print_unsignedi},
		{"x", print_hex}, 
		{"X", print_hex_cap}, 
		{"o", print_oct},
		{"S", print_string_hex},
		{"p", print_address},
		{"r", print_str_rev},
		{"R", print_rot13}, 
		{NULL, NULL}
	};

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = get_print_function(format, prints, args);
	va_end(args);
	return (count);
}
