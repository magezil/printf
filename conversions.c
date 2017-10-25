#include "holberton.h"

/**
 * print_binary - print number in binary representation
 * @args: list to retrieve number to convert and print
 *
 * Return: number of chars printed
 */
int print_binary(va_list args)
{
	return (convert(va_arg(args, unsigned int), 2));
}

/**
 * print_hex - print number in hexadecimal representation
 * @args: list to retrieve number to convert and print
 *
 * Return: number of chars printed
 */
int print_hex(va_list args)
{
	return (convert2(va_arg(args, unsigned int), 16, 'a'));
}

/**
 * print_hex_cap - print number in hexadecimal representation in caps
 * @args: list to retrieve number to convert and print
 *
 * Return: number of chars printed
 */
int print_hex_cap(va_list args)
{
	return (convert2(va_arg(args, unsigned int), 16, 'A'));
}

/**
 * print_oct - print number in octal representation
 * @args: list to retrieve number to convert and print
 *
 * Return: number of chars printed
 */
int print_oct(va_list args)
{
	return (convert(va_arg(args, unsigned int), 8));
}
