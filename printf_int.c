#include "holberton.h"
/**
 * len_u_dig: calcula cantidad de digitos que contiene un dato unsigned int.y
 * @num: El numero a calcular.
 * Return: La cantidad de digitos que tiene num
 */
int len_dig(int num)
{
	int sum = 11, digitos = 0;

	if (num < 0)
	{
		digitos += 1;
		num = -num;

	}

	if (num == 0)
		return (1);

	while(sum / 10 > 0) // 1; 0
	{
	        sum = num; // 10 ;  1
	        num = num / 10; //1; 0
	        digitos += 1; //1; 2
	}

	return(digitos);

}
/**
 * print_int: Converts each digit of an integer to characters
 * and places them in a buffer array from the indicated position.
 *
 * @num: The number to convert.
 * @index: The position where buffer carry on.
 * @buffer: The array to be filled.
 * Return: The number of digits converted.
 */
int print_int(va_list a, char *buffer, int index)
{
	int num = va_arg(a, int);
	int len, i = 0, ctrl = 0;
	char *convert;

	len = len_dig(num);

	convert = malloc(len);

	if (num < 0)
	{
		num = -num;
		convert[0] = '-';
		ctrl = 1;

	}

	i = len;

	while(i > ctrl)
	{
		convert[i - 1] = (num % 10) + '0';
		num = num / 10;
		i--;

	}

	for (i = 0; i < len; i++)
	{
		buffer[index] = convert[i];
		index++;

	}

	free(convert);

	return(len);

}
