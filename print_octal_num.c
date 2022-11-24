#include "main.h"
/**
 * print_octal_num - print unsigned int as octal
 * @n: the number
 *
 * Return: the num of digits putchar'ed
 */

int print_octal_num(unsigned int n)
{
	int dp = 1, lc = 1;
	int prdico = 0;

	if (n == 0)
	{
		return (_putchar(48));
	}
	else
	{
		while (lc)
		{
			if ((n / dp) < 8)
				lc = 0;
			else
				dp = dp * 8;
		}
		while (dp > 0)
		{
			prdico += _putchar((n / dp) + '0');
			n = n % dp;
			dp = dp / 8;
		}
	}
	return (prdico);
}
