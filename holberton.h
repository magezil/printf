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
int print_unsignedi(va_list args);
int print_hex(va_list args);
int print_hex_cap(va_list args);
int print_oct(va_list args);
int convert(unsigned int num, unsigned int base);
int convert2(unsigned int num, unsigned int base, char ten);
int _strlen(char *s);
int _putchar(char c);

#endif /* HOLBERTON_H */
