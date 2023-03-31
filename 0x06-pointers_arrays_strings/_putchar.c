#include <unistd.h>

/**
 * _putchar - writes the character c on the stdout
 * @c: character to input
 *
 * Return: 1 on success
 * on error, -1 is set
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
