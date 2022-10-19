#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter of the function
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (result < 0)
		result *= -1;
	_putchar(result + '0');
	return (0);
}
