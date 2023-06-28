#include "main.h"
/**
 * _print_oct -  Fnction that handle the cotal "o" format specifier
 * @oct:  Argument that represent the given octal argument passed
 *
 * Return: This function return the number of digits passed
 */
int _print_oct(va_list oct)
{
	unsigned int i = 1, j, k, sum;
	unsigned int arr[11];
	int num; /* Using to return the number of args passed */

	k = va_arg(oct, unsigned int);
	j = 1073741824;
	arr[0] = k / j;

	while (i < 11)
	{
		j /= 8;
		arr[i] = (k / j) % 8;
		i++;
	}
	for (i = 0, sum = 0, num = 0; i < 11; i++)
	{
		sum += arr[i];
		if (sum || i == 10)
		{
			_putchar('0' + arr[i]);
			num++;
		}
	}
	return (num);
}

/**
 * _print_unsign -  Function that handle the unsigned int "u" format
 * specifier.
 * @unsignInt: Argument that represnt the unsigned args passed to
 * the function
 *
 * Return:  Returns  the total number of the digit as an int
 */
int _print_unsign(va_list unsignInt)
{
	unsigned int i, j, k, sum;
	unsigned int arr[10];
	int num;

	k = va_arg(unsignInt, unsigned int);
	j = 1000000000; /* Going at (10 ^ 9) places */
	arr[0] = k / j;

	for (i = 1; i < 10; i++)
	{
		j /= 10;
		arr[i] = (k / j) % 10;
	}
	for (i = 0, sum = 0, num = 0; i < 10; i++)
	{
		sum += arr[i];
		if (sum || i == 9)
		{
			_putchar('0' + arr[i]);
			num++;
		}
	}
	return (num);
}
