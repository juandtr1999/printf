#include "holberton.h"

/**
 * print_char - Print characters.
 * @a: Name the list.
 * @buffer: Local buffer.
 * @index: The position where buffer carry on.
 */

int print_char(va_list a, char *buffer, int index)
{
	char caracter = va_arg(a, int);
	buffer[index] = caracter;
	return (1);
}
