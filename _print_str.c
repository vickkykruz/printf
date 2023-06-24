#include "main.h"
/**
 * _print_ch - This is a function that return the converted char
 * @ch: This is an argument that represent the given char charcater
 *
 * Return: This function return an (int)
 */
int _print_ch(va_list ch)
{
	char c;

	c = (char)va_arg(ch, int);
	_putchar(c);

	return (1);
}
/**
 * _print_str - This is a function that return the converted string
 * @str: This is an argument that represent the given string passed to the
 * function
 *
 * Return: This function will return the number of chars
 */
int _print_str(va_list str)
{
	int i;
	char *s = va_arg(str, char *);

	/* Check if the string was return NULL */
	if (s == NULL)
		s = "(nil)";

	for (i = 0; s[i]; i++)
		_putchar(s[i]);
	return (i);
}
