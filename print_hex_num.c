#include "main.h"

/**
 * print_hex_num - print unsigned int as hexadecimal
 * @n: the number
 * @is_upper: flag for format specifier used
 *
 * Return: the num of digits putchar'ed
 */

int print_hex_num(unsigned long int n, int is_upper)
{
	unsigned long int dp = 1, lc = 1;
	unsigned long int h;
	int prdico = 0;

	if (n == 0)
	{
		return (_putchar(48));
	}
	else
	{
		while (lc)
		{
			if ((n / dp) < 16)
				lc = 0;
			else
				dp = dp * 16;
		}
		while (dp > 0)
		{
			h = n / dp;
			if (h < 10)
				prdico += _putchar(h + '0');
			else
				prdico += replace_h(h, is_upper);
			n = n % dp;
			dp = dp / 16;
		}
	}
	return (prdico);
}
