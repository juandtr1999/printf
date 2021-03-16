#include "holberton.h"

/**
 * _printf - Write a format in the standar out. See man_3_printf.
 *
 * @format: The text to write.
 * Return: Number of caracters written.
*/

int _printf(const char * const format, ...)
{
	int i = 0, j = 0, pos_wrt = 0;
	char buffer[1024];
	fmt_type match[] = {{'c', print_char}, {'s', print_string}, {'\0', NULL}};
	va_list args_l;

	va_start(args_l, format);

	while (format && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (match[j].c)
			{
				if (format[i + 1] == match[j].c)
				{
					pos_wrt += match[j].f(args_l, buffer, pos_wrt);
					i++;
					break;
				}
				j++;
			}
		}
		else
		{
			buffer[pos_wrt] = format[i];
			pos_wrt++;
		}
		i++;
	}
	write(1, buffer, pos_wrt);
	return (pos_wrt);
}
