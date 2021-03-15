#include "holberton.h"
/**
 * len_dig: calculates the number of digits that an integer contains.
 *
 * @num: The number to measure.
 * Return: The number of digits that num has.
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

/**
 * len_u_dig: calculates the number of digits that an unsigned int data contains.
 * 
 * @num: The number to measure.
 * Return: The number of digits that num has.
 */

int len_u_dig(unsigned int num)
{
    unsigned int sum = 11;
    int digitos = 0;

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
 * print_u_int: Converts each digit of an unsigned integer to characters
 * and places them in a buffer array from the indicated position.
 *
 * @num: The number to convert.
 * @index: The position where buffer carry on.
 * @buffer: The array to be filled.
 * Return: The number of digits converted.
 */
int print_u_int(va_list a, char *buffer, int index)
{
    unsigned int num = va_arg(a, unsigned int);
    int len, i = 0, ctrl = 0;
    char *convert;

    len = len_u_dig(num);
    
    convert = malloc(len);

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
