#include <stdio.h>
/**
 * main - Prints all letters in lowercase
 * Return: always 0;
 */
int main(void)
{
	char charac;

	for (charac = 'a' ; charac <= 'z' ; charac++)
	{
		putchar(charac);
	};
	printf("\n");
	return (0);
}
