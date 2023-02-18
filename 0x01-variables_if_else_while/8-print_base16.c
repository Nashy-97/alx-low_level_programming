#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * Return: Always 0 (succes)
 */
int main(void)
{
	char low;
	int d;

	for (d = '0'; d <= 9; d++)
		putchar(d + '0');
	for (low = 'a'; low <= 'f'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
