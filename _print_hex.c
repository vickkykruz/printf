#include "main.h"
/**
 * _print_heX - A function that handles the UPPERCASE hexdecimal
 * format
 * @unX: An argument that reprsent the unsigned int to display
 *
 * Return: The functions return the total digite passed
 */
int _print_heX(va_list unX)
{
	return (convert_hex(va_arg(unX, unsigned int), 1));
}
/**
 * _print_hex - A function that handles the lowercase of the
 * hexdecimal format
 * @un_x: An argument tha represent the unsigned int value to be
 * display
 *
 * Return: Function returns the number of digits passed
 */
int _print_hex(va_list un_x)
{
	return (convert_hex(va_arg(un_x, unsigned int), 0));
}
