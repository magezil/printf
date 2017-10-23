#include "holberton.h"

/**
 * print_binary - print number in binary representation
 * @args: list to retrieve number to convert and print
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
	int mask = 1;
	int count = 0;
	int neg = 0;

	if (num < 0)
	{
		num = -1 * num;
		neg = 1;
	}
	while (mask < num)
	{
		count++;
		mask = mask << 1;
	}

	if (neg)
		num = -1 * num;
	else
		mask = mask >> 1;
	while (mask != 0)
	{
		if ((mask & num) > 0)
			count += _putchar('1');
		else
			count += _putchar('0');
		mask = mask >> 1;
	}
	return (count);
}
