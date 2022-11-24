#include "main.h"

/**
 * print_number - print number
 * @n: the number
 *
 * Return: the num of digits putchar'ed
 */

int print_number(int n)
{
	int dp = 1, lc = 1;
	int prdico = 0;

	if (n == 0)
	{
		return (_putchar(48));
	}
	else
	{
		if (n < 0)
			prdico += _putchar(45);
		while (lc)
		{
			if (n < 0)
				if ((n / dp) > -10)
					lc = 0;
				else
					dp = dp * 10;
			else
				if ((n / dp) < 10)
					lc = 0;
				else
					dp = dp * 10;
		}
		while (dp > 0)
		{
			if (n < 0)
			{
				prdico += _putchar((-(n / dp)) + '0');
				n = -(n % dp);
			}
			else
			{
				prdico += _putchar((n / dp) + '0');
				n = n % dp;
			}
			dp = dp / 10;
		}
	}
	return (prdico);
}
