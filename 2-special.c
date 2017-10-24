#include "holberton.h"


/**
 * print_rot13 - print rot13
 *
 * @arguments: structure definitions
 * Return: count characters
 */
int print_rot13(va_list arguments)
{
	int i;
	int count;

	i = 0;
	count = 0;
	s = va_list(arguments);

	if (s == NULL)
		s == ("null");

	while (s[i] != '\0')
	{
		while ((s[i] >= 'a' && s[i] <= 'z') ||
		       (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if ((s[i] >= 'N' && s[i] <= 'Z') ||
			    (s[i] >= 'n' && s[i] <= 'z'))
				count += _putchar(s[i] - 13);
			else
				count += _putchar(s[i] + 13);
			i++;
		}
		i++;
	}
	return (count);
}

/**
 * print_str_rev - print string in reverse
 *
 * @arguments: structure definitions
 * Return: count characters
 */
int print_str_rev(va_list arguments)
{
	int i;
	int count;

	i = 0;
	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
		count += _putchar(s[i--]);
	return (count);
}
