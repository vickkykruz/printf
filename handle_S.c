#include "main.h"
/**
 * handle_hex - This is a function that handle the char's ASCII value given
 * in uppercase hex
 * @ch: This is an argument that represent the given charcter to output
 *
 * Return: This function return an int (2)
 */
static int handle_hex(char ch)
{
	char c = 'A' - ':';
	char arr[2];
	int i = 0;

	/** Uaing the array we want to store the given twoe interger */
	arr[0] = ch / 16;
	arr[1] = ch % 16;

	while (i < 2)
	{
		if (arr[i] >= 10)
			_putchar('0' + c + arr[i]);
		else
			_putchar('0' + arr[i]);
		i++;
	}
	return (i);
}
/**
 * _print_Str - This is a function that handle strings and notprintable of
 * @Str: This is an argument that reprsent the string argument passed
 *
 * Return: This function returns the number of char displayed
 */
int _print_Str(va_list Str)
{
	int num = 0; /* Return the number of char ouputed */
	char *ptr = va_arg(Str, char *); /* Handle the argument passed */
	unsigned int i = 0;

	if (ptr == NULL)
		ptr = "(nil)";

	/* Loop The characters and output it */
	while (ptr[i])
	{
		/* character less than D space character or greter than DEL */
		if (ptr[i] < 32 || ptr[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			num += 2;
			num += handle_hex(ptr[i]);
		}
		else
		{
			_putchar(ptr[i]);
			num++;
		}
		i++;
	}
	return (num);
}
