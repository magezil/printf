.TH _PRINTF 3 "24 October 2017" "v1.5" "_printf manual"
printf

GETTING STARTED
This new and improved printf() function receive user input and prints to
the standard output or command line and uses specially programmed format
specifiers to convert arguments into strings. Not only is this function
capable of reproducing the standard output of the shell printf() function,
it is also able to perform a number of specialized tasks.

SYNOPSIS
_printf FORMAT [ARGUMENT] ...
DESCRIPTION
The _printf() function takes in characters, strings, and number as .I FORMAT specifiers and outputs them to the command line.

FORMAT outputs a specified format relative to the specifier input.
%c
Writes a character

%s
Writes a string of characters

%%
Displays a single '%' character

%d
Converts argument to signed decimal notation and displays

%i
Converts argument to unsigned decimal notation and displays

%b
Presents inputted number in binary form

%x
Presents inputted number in lowercase hexadecimal form

%X
Presents inputted number in uppercase hexadecimal form

%o
Presents inputted number in octal form

%S
Presents inputted strings in hexadecimal form

%r
Writes a string of characters in reverse

%R
Converts inputted string in 'rot13' substitution form