#include "main.h"

/**
 * _isalpha - checks for alphabetic character.
 *
 * @c: This is a character in ASCII code.
 *
 * Return: 1 if (c is a letter) and 0 for otherwise.
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
