#include "holberton.h"


/**
 * get_function - pulls function from header
 *
 * @format: list of types of arguments
 * @types: list of functions
 * @arguments: structure definitions
 Return: character count
 */
int get_function(const char *format, types_t types[], va_list arguments)
{
	int itr1;
	int itr2;
	int count;

	itr1 = 0;
	itr2 = 0;
	count = 0;

	while (format[itr1] != '\0')
	{
		itr2 = 0;
		if (format[itr1] == '%')
		{
			itr1++;
			while (types[itr2].type != NULL)
			{
				if (format[itr1] == *(types[itr2].type))
				{
						count = count + types[itr2].f(arguments);
						break;
				}
				if (format[itr1] == '%')
					count = count + _putchar('%');
				itr2++;
			}
		}
		else
			count = count + _putchar(format[itr1]);
		itr1++;
	}
}
