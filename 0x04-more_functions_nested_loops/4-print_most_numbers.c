#include "main.h"
/**
 *print_numbers - function that prints the numbers, from 0 to 9
 *Description: printing numbers from 0 to 9
 *Return: Always 0 (success)
 */
void print_most_numbers(void)
{
	int i;
	i = 48;

	while (i <= 57)
	{
		if (i != 50 && i != 52)

		{
			i += 1;
		}
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');

}
}

