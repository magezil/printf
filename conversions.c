#include "holberton.h"

/**
 * print_binary - print number in binary representation
 * @va_list: list to retrieve number to convert and print
 *
 * Return: number of chars printed
 */
int print_binary(va_list args)
{
	return (binary(va_arg(args, int)));
}

/**
 * binary - recursive function to print binary
 * @num: number to convert
 *
 * Return: number of chars printed
 */
int binary(int num)
{
	if (num / 2 == 0)
		return (_putchar(num % 2 + '0'));
	if (num / 2 == 1)
		return (_putchar(num / 2 + '0') + _putchar(num % 2 + '0'));
	return (binary(num / 2) + _putchar(num % 2 + '0'));
}
