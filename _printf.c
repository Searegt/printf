#include "main.h"

/**
 * _printf - my version of printf
 * @format: a format string
 *
 * Return: No of printed chars
 */

int _printf(const char *format, ...)
{
	va_list ap;
	unsigned int l, i = 0;
	char f;
	char *error = "Error";
	int count = 0, prichco = 0;

	if (format != NULL)
	{
		l = strlen(format);
		va_start(ap, format);
		while (i < l && format[i] != '\0')
		{
			f = format[i];
			if (f == '%')
			{
				i++;
				if (i < l)
				{
					f = format[i];
					prichco = switch_f_and_print(f, ap);
					if (prichco)
						count += prichco;
					else
					{
						i--;
						f = format[i];
						count += _putchar(f);
					}
				}
				else
					for (i = 0; i < 5; i++)
						_putchar(error[i]);
			}
			else
				count += _putchar(f);
			i++;
		}
		va_end(ap);
	}
	return (count);
}
