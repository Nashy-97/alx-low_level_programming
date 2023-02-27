#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string
 * Return: void
 */

void print_rev(char *s)
{
	char *t = s;

	{
		while (*t)
			t++;
		while (s < t--)
			_putchar(*t);
		_putchar('\n');
	}
}
