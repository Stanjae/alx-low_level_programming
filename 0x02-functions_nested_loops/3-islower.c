#include "main.h"
/**
 * _islower - it finds all lowercase letters
 * @c: the character of the static function
 * Return: alway 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
