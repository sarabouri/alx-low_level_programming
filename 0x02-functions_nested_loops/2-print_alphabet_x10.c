#include "main.h"
/**
 * main - Entry point
 * print_alphabet_x10 - Prints the lowercase alphabet from a to z, x10 times.
 * Return: Always à (success)
 */

void print_alphabet_x10(void)

{
	int i, j;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (j = 97 ; j <= 122 ; j++)

			_putchar(j);

		_putchar('\n');
	}

}
