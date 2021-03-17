#include "holberton.h"
#include <limits.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void) {

	int x1, x2, len, len2;
	_printf("Let's try to printf a simple sentence.\n");
	printf("Let's try to printf a simple sentence.\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	x1 = _printf("String:[%s]\n", "I am a string !");
	x2 = printf("String:[%s]\n", "I am a string !");
	printf("x1:%d ; x2:%d\n", x1, x2);


	len = _printf("%     d test\n", 12);
	len2 = printf("%     d test\n", 12);
    printf("Length:[%d, %d]\n", len, len2);
    len = _printf("%     d test\n", -12);
    len2 = printf("%     d test\n", -12);
    printf("Length:[%d, %d]\n", len, len2);
    len = _printf("%     i test\n", 12);
    len2 = printf("%     i test\n", 12);
    printf("Length:[%d, %d]\n", len, len2);
    len = _printf("%     i test\n", -12);
    len2 = printf("%     i test\n", -12);
    printf("Length:[%d, %d]\n", len, len2);
    len = _printf("[%d]\n", -128);
    len2 = printf("[%d]\n", -128);
    printf("Length:[%d, %d]\n", len, len2);
    len = _printf("[%i]\n", -128);
    len2 = printf("[%i]\n", -128);
    printf("Length:[%d, %d]\n", len, len2);
    printf("%d\n", INT_MAX);
    _printf("%d\n", INT_MAX);
    printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));
    _printf("%d + %d = %d\n", INT_MIN, INT_MAX, (INT_MIN + INT_MAX));

	return (0);
}
