#include "holberton.h"
/**
 * find_m - Look for the function to perform.
 *
 * @fmt: The caracter to find.
 * @list: List to take argtument
 * @buff: buffer to print.
 * @p: Position buffer carry on.
 * @i: Format index.
 * Return: Number of caracters written.
 */

int find_m(const char * const fmt, va_list list, char *buff, int p, int *i)
{
	fmt_type match[] = {{'c', print_char}, {'s', print_string}, {'\0', NULL}};
	int j = 0;

	while (match[j].c)
	{
		if (fmt[*i] == match[j].c)
		{
			p += match[j].f(list, buff, p);
			return (p);
		}
		j++;
	}
	if (fmt[*i] == 0)
		return (-1);
	else if (fmt[*i] == '%')
	{
		buff[p] = '%';
		return (p + 1);
	}
	else if (fmt[*i] == 32)
	{
		*i += 1;
		return (find_m(fmt, list, buff, p, i));
	}
	buff[p] = '%';
	buff[p + 1] = fmt[*i];
	return (p + 2);
}

/**
 * _printf - Write a format in the standar out. See man_3_printf.
 *
 * @format: The text to write.
 * Return: Number of caracters written.
*/

int _printf(const char * const format, ...)
{
	int i = 0, pos_wrt = 0;
	char buffer[1024];
	va_list args_l;
	int *i_ptr = &i;

	va_start(args_l, format);
	if (format == NULL)
		return (-1);
	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			pos_wrt = find_m(format, args_l, buffer, pos_wrt, i_ptr);
			if (pos_wrt == -1)
				return (-1);
			i++;
			continue;
		}
		buffer[pos_wrt] = format[i];
		pos_wrt++;
		i++;
	}
	write(1, buffer, pos_wrt);
	return (pos_wrt);
}

