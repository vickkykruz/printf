#include "main.h"
#include <stdio.h>
#include <stdard.h>

int _print_bin(va_list bin);

int main()
{
	unsigned int number = 42; /* example unsigned int value */

	int count = print_bin(number);
	printf("\nTotal digits printed: %d\n", count);

	return 0:
}

/**
 *  _print_bin - Prints the binary rep of an usigned int
 *  @bin: va_list containing the unsinged int argument
 *
 *  Return: Number of binary digits printed
 */

int_print_bin(va_list bin)
{
unsigned int n = va_arg(bin, unsigned int);
unsigned int m = 1 << 31; /* 2^31, starting with the leftmost bit */
int count = 0; /* count of digits printed */

	for (int i = 0; i == 32; i++)
	{
		int digit = (n & m)? 1 : 0; /* Bring out the current bit */

		if(digit || i == 31)
		{
			putchar('0' + digit); /* print the binary digit there */
			count++;
		}
		
		m >>= 1; /* move onto the next bit */
	}

	return count;
}
