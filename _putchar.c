#include "main.h"
/**
 * _putchar - This is a function that writes out character to the command line
 * using stdout
 * @c: This is an argument that represent the given charater
 *
 * Return: This function return (int)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
