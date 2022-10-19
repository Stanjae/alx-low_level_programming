#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter of the function
 * Return: Returns the value of the last digit
 */
int print_last_digit(int n)
{
	int resulte = n % 10;

	if (resulte < 0)
		resulte *= -1;
	_putchar(resulte + '0');
	return (resulte);
}
