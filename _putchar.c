#include "main.h"
/**
 * _putchar - A function that writes out character to the command line
 * using stdout
 * @c: An argument that represent the given charater
 *
 * Return: Function returns (int)
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
