#include "main.h"

/**
 * _putchar - write the character c to standout
 * @c: the main character to print
 *
 * Return: 0 on success and -1 on error.
 */
int_putchar(char c)
{
	return (write(1, &c, 1));
}
