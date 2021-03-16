#include "holberton.h"

/**
 * print_char - Print characters.
 * @a: Name the list.
 * @buffer: Local buffer.
 * @index: The position where buffer carry on.
 *
 * Return: 1.
 */

int print_char(va_list a, char *buffer, int index)
{
	char caracter = va_arg(a, int);

	buffer[index] = caracter;

	return (1);
}

/**
 * len_str - Find the string size.
 * @n: Receive the string.
 *
 * Return: string size.
 */

int len_str(char *n)
{
	int i = 0;
	char b = 0;

	while (n[i])
	{
		i++;
		b++;
	}

	return (b);
}

/**
 * print_string - Print strings.
 * @a: Name the list.
 * @buffer: Local buffer.
 * @index: The position where buffer carry on.
 *
 * Return: length
 */

int print_string(va_list a, char *buffer, int index)
{
	char *string = va_arg(a, char *);
	int length = 0;
	int i;

	if (string == NULL)
		string = "(null)";

	length = len_str(string);

	for (i = 0; i < length; i++)
	{
		buffer[index] = string[i];
		index++;
	}
	return (length);
}
