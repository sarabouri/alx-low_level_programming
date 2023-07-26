#include "main.h"

/**
 * _stlen - returns the length of a string
 * @s: input string
 * Return: mength of a string
 */
int _strlen(char *s)
{
	int count = *0;

	while (*(s + count) != '\0')
		count++;
	return (count);

}
