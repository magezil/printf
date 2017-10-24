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

/**
 * convert - recursive function to print from base 10 to given base
 * @num: number to convert
 * @base: base to convert to
 *
 * Return: number of chars printed
 */
int convert(unsigned int num, unsigned int base)
{
	if (num / base == 0)
		return (_putchar(num % base + '0'));
	if (num / base < base)
		return (_putchar(num / base + '0') + _putchar(num % base + '0'));
	return (convert(num / base, base) + _putchar(num % base + '0'));
}

/**
 * convert2 - recursive function to print from base 10 to given base > 10
 * @num: number to convert
 * @base: base greater than 10 to convert to
 *
 * Return: number of chars printed
 */
int convert2(unsigned int num, unsigned int base, char ten)
{
	unsigned int rem = num % base;
	unsigned int div = num / base;
	char next;

	if (rem > 10)
		next = (rem - 10) + ten;
	else
		next = rem + '0';
	
	if (div == 0)
	{
		return (_putchar(next));
	}
	if (div < base)
	{
		if (div > 10)
			return (_putchar(div + ten) + _putchar(next));
		return (_putchar(div + '0') + _putchar(next));
	}
	
	return (convert2(div, base, ten) + _putchar(next));
}
