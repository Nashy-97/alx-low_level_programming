#include "main.h"
/**
 *_islower - program checks for lowercase character
 *@c: the character to be checked
 *Return: 1 for lowercase or 0 for else.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
