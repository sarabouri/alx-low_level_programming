#include "main.h"
/**
*Description: print_alphabet_x10 - Prints the alphabet from a to z, x10 times.
*/

void print_alphabet_x10(void)
/*print_alphabet_x10 - Prints the alphabet from a to z, x10 times.*/

{
		int i, j;

for (i = 1 ; i <= 10 ; i++)
{
		for (j = 97 ; j <= 122 ; j++)
		{
_putchar(j);
		}
		 _putchar('\n');
	}

}

