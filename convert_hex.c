#include "main.h"
/**
 * convert_hex - This is a function that handle unsigned int in hexi-decimal
 * format
 * @num: This is an argument that represent the unsigned int value to be
 * display
 * @f: This ia an argument that handles the flag of the output
 *
 * Return: This function returns the number od digits outputed
 */
int convert_hex(unsigned int num, unsigned int f)
{
	unsigned int i = 1, j, sum;
	unsigned int arr[8];
	int counter;
	char ch;

	/* Convert to 16 ^ 7 **/
	j = 268435456;
	ch = (f) ? 'A' - ':' : 'a' - ':';
	arr[0] = num / j;

	while (i < 8)
	{
		j /= 16;
		arr[i] = (num / j) % 16;
		i++;
	}
	for (i = 0, sum = 0, counter = 0; i < 8; i++)
	{
		sum += arr[i];
		if (sum || i == 7)
		{
			if (arr[i] < 10)
				_putchar('0' + arr[i]);
			else
				_putchar('0' + ch + arr[i]);
			counter++;
		}
	}
	return (counter);
}
