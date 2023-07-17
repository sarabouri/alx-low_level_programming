#include <stdio.h>

/**
*main -Entry point
*Description: printing numbers from 0 to 9
*Return: always 0 (success)
*/

int main(void)
{int i;
	for (i = 0 ; i < 10 ; i++)

		putchar(i + 48);

	putchar('\n');

return (0); }
