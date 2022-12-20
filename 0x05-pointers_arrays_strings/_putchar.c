#include <unistd.h>

/**
 * _putchar - writes the charachter c to stdout
 * @c: charachter to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and errno is set approriatrly.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
