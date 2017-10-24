#include "holberton.h"


/**
 * print_number - print numbers
 *
 * @arguments: structure definitions
 * Return: number of integers
 */
int print_number(va_list arguments)
{
        va_list arguments;
        unsigned int itr;

        itr = 0;

        while (itr < n)
        {
                printf("%d", va_arg(arguments, int));
                itr++;
        }
        return(_putchar(va_list(arguments, int)));
}
