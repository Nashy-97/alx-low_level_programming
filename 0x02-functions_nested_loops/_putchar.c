#include <unistd.h>
/**
 * _putchar - writing the character c to stdout
 * @c: the character to print
 *return: 1 (success)
 *on error return -1.
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
