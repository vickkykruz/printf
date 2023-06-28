#include "main.h"
<<<<<<< HEAD


=======
/**
 * _print_bin - This is a function that return the printed binary notations
 * @bin: This is an argument that represent the passed unsigned int value to
 * print
 *
 * Return: This function return the total number of digit as int
 */
int _print_bin(va_list bin)
{
	unsigned int arr[32];
	int num = 0;
	unsigned int i, j, k, sum;

	k = 2147483648; /* Ranging from 2 ^ 31 */
	j = va_arg(bin, unsigned int); /* Get each variable args */
	arr[0] = j / k;
	i = 1;

	while (i < 32)
	{
		k /= 2;
		arr[i] = (j / k) % 2;
		i++;
	}

	for (i = 0, sum = 0, num = 0; i < 32; i++)
	{
		sum += arr[i];
		if (sum || i == 31)
		{
			_putchar('0' + arr[i]);
			num++;
		}
	}
	return (num);
}

>>>>>>> 8b4b7f9c5296993d343b2648d528577f87ef76c0
