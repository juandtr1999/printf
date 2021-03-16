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
	int i;

	if (string == NULL)
		string = "(null)";

	for (i = 0; string[i]; i++)
	{
		buffer[index] = string[i];
		index++;
	}
	return (i);
}
