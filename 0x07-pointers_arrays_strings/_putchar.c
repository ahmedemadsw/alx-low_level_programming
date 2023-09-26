#include <unistd.h>

/**
 * _putchar: -  writes the character t to stdout
 * 3c: the character to print
 *
 * return: on success 1.
 * on error, -1 is returned, and error is set approprtately.
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
