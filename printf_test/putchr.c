#include "main.h"
/**
 * putchr - print char
 * @c: char
 * Return: 1
 */
int putchr(char c)
{
	return (write(1, &c, 1));
}