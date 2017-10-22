#include <stdarg.h>
#include <unistd.h>
#include "holberton.h"

/**
 * print_char - prints a char to output
 * @args: list to retrieve char to print
 *
 * Return: number of chars printed (1)
 */
int print_char(va_list args)
{
        return (_putchar(va_arg(args, int)));
}

/**
 * print_string - prints a string to output
 * @args: list to retrieve string to print
 *
 * Return: number of chars printed
 */
int print_string(va_list args)
{
        int len;
        char *str = va_arg(args, char *);

        if (str == NULL)
                str = "(null)";
        len = _strlen(str);
        write(1, str, len);
        return (len);
}

/**
 * _strlen - gets length of a string
 * @str: string to compute length of
 *
 * Return: length of string
 */
int _strlen(char *str)
{
        int i = 0;

        while (str[i] != '\0')
                i++;
        return (i);
}

/**
 * _putchar - prints given character
 * @c: character to print
 *
 * Return: number of characters printed, -1 if error
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
