#include "main.h"
/**
 * _putint - print integer
 *
 * @in: input number
 * Return: int
 */
int _putint(int in)
{
	int i = 0;

	if (in < 0)
	{
	i += putchr('-');
	in = -in;
	}

	if (in / 10 != 0)
	{
		i += _putint(in / 10);
	}
	i += putchr('0' + (in % 10));
	return (i);
}
