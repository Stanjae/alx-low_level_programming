#include "main.h"
#include <unistd.h>
/**
 * _putchar - new prototype
 * @c: charactr to print
 * Return: always 0 or 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
