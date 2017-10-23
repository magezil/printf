#include <stdio.h>
#include "holberton.h"

int main(void)
{
	char *s = "I am a var!";
	int len1;
	int len2;

	/* Test format string is NULL - no output expected */
	len1 = printf(NULL);
	len2 = _printf(NULL);
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test parameter string is NULL - expect print (null) */
	len1 = printf("Null is %s\n", NULL);
	len2 = _printf("Null is %s\n", NULL);
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test with empty string */
	len1 = printf("Nothing should be after this statement: %s\n", "");
	len2 = _printf("Nothing should be after this statement: %s\n", "");
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test if input is a string directly entered */
	len1 = printf("Test string: %s\n", "YES!");
	len2 = _printf("Test string: %s\n", "YES!");
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test input of a string variable */
	len1 = printf("Test string variable: %s\n", s);
	len2 = _printf("Test string variable: %s\n", s);
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test input of string variable in middle of a string */
	len1 = printf("Test %s string\n", s);
	len2 = _printf("Test %s string\n", s);
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test input of special characters */
	len1 = printf("%s Test\\ string\n", s);
	len2 = _printf("%s Test\\ string\n", s);
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test %c */
	len1 = printf("%cello\n", 'H');
	len2 = _printf("%cello\n", 'H');
	printf("std return: %d, _printf return: %d\n", len1, len2);

	/* Test %% */
	len1 = printf("print %%%correctly?\n");
	len2 = _printf("print %%%correctly?\n");
	printf("std return: %d, _printf return: %d\n", len1, len2);

	return (0);
}
