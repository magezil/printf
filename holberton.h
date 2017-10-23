#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_functions - Struct for print_functions
 *
 * @type: The format to print
 * @f: The print function to use
 */
typedef struct print_functions
{
	char *type;
	int (*f)();
} print_t;

int _printf(const char *format, ...);
int get_print_function(const char *format, print_t *prints, va_list args);
int print_char(va_list args);
int print_string(va_list args);
int print_number(va_list args);
int print_binary(va_list args);
int binary(unsigned long int num);
int _strlen(char *s);
int _putchar(char c);

#endif /* HOLBERTON_H */
