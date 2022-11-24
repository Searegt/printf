#include "main.h"

/**
 * switch_f_and_print - switch format chars one by one and print accordingly
 * @f: format char
 * @ap: va_list var
 *
 * Return: 1 if f is a valid case 0 if not
 */

int switch_f_and_print(char f, va_list ap)
{
	char *s;
	int i;
	int strl = 0;

	switch (f)
	{
		case 'b':
			return (print_binary_num(va_arg(ap, unsigned int)));
		case 'c':
			return (_putchar(va_arg(ap, int)));
		case 'o':
			return (print_octal_num(va_arg(ap, unsigned int)));
		case 'x':
			return (print_hex_num(va_arg(ap, unsigned long int), 0));
		case 'X':
			return (print_hex_num(va_arg(ap, unsigned long int), 1));
		case 'u':
			return (print_unsigned_number(va_arg(ap, unsigned int)));
		case 'i':
		case 'd':
			return (print_number(va_arg(ap, int)));
		case 'p':
			_putchar('0');
			_putchar('x');
			return (2 + print_hex_num(va_arg(ap, unsigned long int), 0));
		case 's':
			s = va_arg(ap, char *);
			if (s != NULL)
			{
				strl = strlen(s);
				for (i = 0; i < strl; i++)
					_putchar(s[i]);
			}
			return (strl);
		case '%':
			return (_putchar('%'));
	}
	return (0);
}
