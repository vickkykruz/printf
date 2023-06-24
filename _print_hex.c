#include "main.h"
/**
 * _print_heX - This is a function that handles the uppercase hexdecimal
 * format
 * @unX: This is an argument that reprsent the unsigned int to display
 *
 * Return: This functions return the total digite passed
 */
int _print_heX(va_list unX)
{
	return (convert_hex(va_arg(unX, unsigned int), 1));
}
/**
 * _print_hex - This is a function that handles the lowercase of the
 * hexdecimal format
 * @un_x: This  is an argument tha represent the unsigned int value to be
 * display
 *
 * Return: This function returns the number of digits passed
 */
int _print_hex(va_list un_x)
{
	return (convert_hex(va_arg(un_x, unsigned int), 0));
}
