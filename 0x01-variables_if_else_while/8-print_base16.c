#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: Always 0 (succes)
 */
int main(void)
{
	char c;
	int d;

	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
