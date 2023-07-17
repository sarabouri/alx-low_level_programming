#include <stdio.h>

/**
* main - Entry point
* Description: alphabet soup
* Return: Always 0 (success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (i != 'q' && i != 'e')
		{
			continue;
		}
		putchar(alp[i]);
	}

	putchar('\n');

	return (0);
}

