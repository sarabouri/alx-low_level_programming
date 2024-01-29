#include "main.h"
/**
 * _isdigit - function that checks for a digit (0 through ç)
 *
 *@c: entry by user
 *Return: 1 if is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
		else
	{
		return (0);
	}
}
