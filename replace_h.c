#include "main.h"

/**
 * replace_h - replace digits upper than 10 by respective letters
 * @h: the digit
 * @is_upper: flag to use lower or upper case
 *
 * Return: the num of digits putchar'ed
 */

int replace_h(unsigned long int h, int is_upper)
{
	switch (h)
	{
		case 10:
			if (is_upper)
				return (_putchar('A'));
			else
				return (_putchar('a'));
		case 11:
			if (is_upper)
				return (_putchar('B'));
			else
				return (_putchar('b'));
		case 12:
			if (is_upper)
				return (_putchar('C'));
			else
				return (_putchar('c'));
		case 13:
			if (is_upper)
				return (_putchar('D'));
			else
				return (_putchar('d'));
		case 14:
			if (is_upper)
				return (_putchar('e'));
			else
				return (_putchar('e'));
		case 15:
			if (is_upper)
				return (_putchar('F'));
			else
				return (_putchar('f'));
	}
	return (0);
}
