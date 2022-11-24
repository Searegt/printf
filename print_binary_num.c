#include "main.h"
/**
 * print_binary_num - print unsigned int as binary
 * @n: the number
 *
 * Return: the num of digits putchar'ed
 */
int print_binary_num(unsigned int n)
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
			if ((n / dp) < 2)
				lc = 0;
			else
				dp = dp * 2;
		}
		while (dp > 0)
		{
			prdico += _putchar((n / dp) + '0');
			n = n % dp;
			dp = dp / 2;
		}
	}
	return (prdico);
}
