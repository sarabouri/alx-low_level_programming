#include "main.h"
/**
 * main - Entry point
 * Description: print_alphabet_x10 from a to z
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
