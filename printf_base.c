#include "holberton.h"
/**
* print_binary - convert integer to binary
* @a: list of arguments
* @buffer: The array to be filled
* @index: Position buffer carry on.
* Return: Number of bits filled.
*/
int print_binary(va_list a, char *buffer, int index)
{
	unsigned int decimal = va_arg(a, unsigned int);

	int i = 0, j, l;
	unsigned int *k;
	unsigned int tmp = decimal;

	if (tmp == 0)
	{
		buffer[i] = '0';
		return (1);
	}

	while (tmp > 0)
	{
		tmp /= 2;
		i++;
	}

	k = malloc(sizeof(unsigned int) * i);

	if (k == 0)
		return (0);

	i = 0;
	while (decimal > 0)
	{
		k[i] = decimal % 2;
		decimal /= 2;
		i++;
	}

	for (j = i - 1; j >= 0; --j)
	{
		buffer[index] = k[j] + '0';
		index += 1;
	}
	free(k);
	return (i);
}

/**
* print_octal - convert integer to octal
* @a: list of arguments
* @buffer: The array to be filled
* @index: Position buffer carry on.
* Return: Number of bits filled.
*/
int print_octal(va_list a, char *buffer, int index)
{

	unsigned int octal = va_arg(a, unsigned int);

	int i = 0, j, l;
	unsigned int *k;
	unsigned int tmp = octal;

	if (tmp == 0)
	{
		buffer[i] = '0';
		return (1);
	}

	while (tmp > 0)
	{
		tmp /= 8;
		i++;
	}

	k = malloc(sizeof(unsigned int) * i);

	if (k == 0)
		return (0);

	i = 0;
	while (octal > 0)
	{
		k[i] = octal % 8;
		octal /= 8;
		i++;
	}

	for (j = i - 1; j >= 0; --j)
	{
		buffer[index] = k[j] + '0';
		index += 1;
	}
	free(k);
	return (i);
}

/**
* print_x_hexal - convert integer to hexal
* upper case letters.
*
* @a: list of arguments
* @buffer: The array to be filled
* @index: Position buffer carry on.
*
* Return: Number of bits filled.
*/
int print_x_hexal(va_list a, char *buffer, int index)
{
	unsigned int hexal = va_arg(a, unsigned int);
	int i = 0, j, l;
	unsigned int *k;
	unsigned int tmp = hexal;

	if (tmp == 0)
	{
		buffer[i] = '0';
		return (1);
	}
	while (tmp > 0)
	{
		tmp /= 16;
		i++;
	}
	k = malloc(sizeof(unsigned int) * i);

	if (k == 0)
		return (0);

	i = 0;
	while (hexal > 0)
	{
		k[i] = hexal % 16;
		hexal /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; --j)
	{
		if (k[j] <= 9)
			buffer[index] = k[j] + '0';
		else
			buffer[index] = k[j] + 87;
		index += 1;
	}
	free(k);
	return (i);
}

/**
* print_X_hexal - convert integer to hexal
* upper case letters.
* @a: list of arguments
* @buffer: The array to be filled
* @index: Position buffer carry on.
* Return: Number of bits filled.
*/

int print_X_hexal(va_list a, char *buffer, int index)
{
	unsigned int hexal = va_arg(a, unsigned int);
	int i = 0, j, l;
	unsigned int *k;
	unsigned int tmp = hexal;

	if (tmp == 0)
	{
		buffer[i] = '0';
		return (1);
	}
	while (tmp > 0)
	{
		tmp /= 16;
		i++;
	}
	k = malloc(sizeof(unsigned int) * i);

	if (k == 0)
		return (0);

	i = 0;
	while (hexal > 0)
	{
		k[i] = hexal % 16;
		hexal /= 16;
		i++;
	}

	for (j = i - 1; j >= 0; --j)
	{
		if (k[j] <= 9)
			buffer[index] = k[j] + '0';
		else
			buffer[index] = k[j] + 55;
		index += 1;
	}
	free(k);
	return (i);
}
