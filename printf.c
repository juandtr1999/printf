#include "holberton.h"
/**
 * find_match - Look for the function to perform.
 *
 * @format_c: The caracter to find.
 * @args_l: List to take argtument
 * @buffer: buffer to print.
 * @index: Position buffer carry on.
 *
 * Return: Number of caracters written.
*/
int find_match(char format_c, va_list args_l, char *buffer, int index)
{
	fmt_type match[] = {{'c', print_char}, {'s', print_string}, {'\0', NULL}};
	int j = 0;

	while (match[j].c)
	{
	if (format_c == match[j].c)
	{
	index += match[j].f(args_l, buffer, index);
	break;
	}
	j++;
	}
	return (index);
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

	va_start(args_l, format);

	if (format == NULL)
		return (-1);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 0)
				return (-1);
			pos_wrt = find_match(format[i + 1], args_l, buffer, pos_wrt);
			i++;
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
