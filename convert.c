#include "holberton.h"

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
 * @ten: character to replace 10 ('A' or 'a')
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
			return (_putchar(div - 10 + ten) + _putchar(next));
		return (_putchar(div + '0') + _putchar(next));
	}

	return (convert2(div, base, ten) + _putchar(next));
}
