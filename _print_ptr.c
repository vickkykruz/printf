#include "main.h"
/**
 * expon - This is a function that return the calculated exponental value
 * @b: This is an argument that represent the base of the number ^2 & & so on
 * @num: This is an argument that represent the number value
 *
 * Return: This function return the value of the exponental result
 */
static unsigned int expon(unsigned int b, unsigned int num)
{
	unsigned int i = 1;
	unsigned long base = b;

	for (i = 1; i < num; i++)
		base *= b;
	return (base);
}
/**
 * _print_ptr - This is a function that handle the format specifier "p" to
 * return the address
 * @ptr: This is an argument that reprsent the value of given ptr argument
 *
 * Return: This function return the number of charcters outputed
 */
int _print_ptr(va_list ptr)
{
	unsigned int arr[16];
	unsigned int i, sum = 0;
	int num = 0;
	char *s = "(nil)";
	unsigned long  j, k;

	j = va_arg(ptr, unsigned long);
	/* If the args value is 0, Loop the string ("nil") and print it */
	if (j == 0)
	{
		for (i = 0; s[i]; i++)
		{
			_putchar(s[i]);
			num++;
		}
		return (num);
	}
	_putchar('0');
	_putchar('x');
	num = 2; /* Adding the count of "0x" */
	k = expon(16, 15);
	arr[0] = j / k;
	for (i = 1; i < 16; i++)
	{
		k /= 16;
		arr[i] = (j / k) % 16;
	}
	for (i = 0; i < 16; i++)
	{
		sum += arr[i];
		if (sum || i == 15)
		{
			if (arr[i] <  10)
				_putchar('0' + arr[i]);
			else
				_putchar('0' + ('a' - ':') + arr[i]);
			num++;
		}
	}
	return (num);
}
