#include "main.h"
/**
 * print_alphabet_x10 - this prints the alphabets 10X on differentlines
 */
void print_alphabet_x10(void)
{
	char letter;
	int counter = 0;

	while (counter < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar("\n");
		counter++;
	}
}
