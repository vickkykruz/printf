#include "main.h"
/**
 * _print_dec - This is a function that handle the decimal format specifier
 * @dec: This is an argument that represent the given decimal value
 *
 * Return: This function return a number of digit as (int)
 */
int _print_dec(va_list dec)
{
	int arr[10];
	int i = 0, j, k = 1000000000, l, sum;

	l = va_arg(dec, int);
	arr[0] = l / k;

	for (j = 1; j < 10; j++)
	{
		k /= 10;
		arr[j] = (l / k) % 10;
	}
	/* Handle a negavtive decimal */
	if (l < 0)
	{
		_putchar('-'); /* Output D "-" to stdout */
		i++; /* Adding The index */
		for (j = 0; j < 10; j++)
			arr[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			i++;
		}
	}
	return (i);
}
/**
 * _print_int - This is a function that handle the interger format specifier
 * @argi: This is an argument that represent the given int value argument
 *
 * Return: The function return of digits as int
 */
int _print_int(va_list argi)
{
	int arr[10];
	int i = 0, j, k = 1000000000, l, sum;

	l = va_arg(argi, int);
	arr[0] = l / k;

	for (j = 1; j < 10; j++)
	{
		k /= 10;
		arr[j] = (l / k) % 10;
	}
	if (l < 0)
	{
		_putchar('-');
		i++;
		for (j = 0; j < 10; j++)
			arr[j] *= -1;
	}
	for (j = 0, sum = 0; j < 10; j++)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			i++;
		}
	}
	return (i);
}
