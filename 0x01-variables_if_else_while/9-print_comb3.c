#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d;

	for (a = 0; d < 10; a++)
	{
		putchar(a + '0');
	}
	if (a < 9)
	{
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

