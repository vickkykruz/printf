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
	int i = 0, j = 1, k = 1000000000, l, sum = 0;

	l = va_arg(dec, int);
	arr[0] = l / k;

	while (j < 10)
	{
		k /= 10;
		arr[j] = (l / k) % 10;
		j++;
	}
	/* Handle a negavtive decimal */
	if (l < 0)
	{
		_putchar('-'); /* Output D "-" to stdout */
		i++; /* Adding The index */
		j = 0; /* Re-intialing the loop count to 0 */
		while (j < 10)
		{
			arr[j] *= -1;
			j++;
		}
	}
	j = 0;
	while (j < 10)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			i++;
		}
		j++;
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
	int i = 0, j = 1, k = 1000000000, l, sum = 0;

	l = va_arg(argi, int);
	arr[0] = l / k;

	while (j < 10)
	{
		k /= 10;
		arr[j] = (l / k) % 10;
		j++;
	}
	if (l < 0)
	{
		_putchar('-');
		i++;
		j = 0;
		while (j < 10)
		{
			arr[j] *= -1;
			j++;
		}
	}
	j = 0;
	while (j < 10)
	{
		sum += arr[j];
		if (sum != 0 || j == 9)
		{
			_putchar('0' + arr[j]);
			i++;
		}
		j++;
	}
	return (i);
}
