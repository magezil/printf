#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct print_functions - print functions
 *
 * @type: print format
 * @f: print function
 */
typedef struct print_functions
{
	char *type;
	int (*f)();
} types_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_number(va_list arguments);
int print_string(va_list arguments);
int print_character(va_list arguments);
/* int print_float(va_list arguments); */
int get_functions(const char *format, types_t types, va_list arguments);
int print_rot13(va_list arguments);
int print_str_rev(va_list arguments);

#endif
