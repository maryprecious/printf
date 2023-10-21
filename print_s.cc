#include "main.h"

/**
 * printf_string - will print a string
 * @ken: the arguements
 * Return: the exact length of my string
 */

int printf_string(va_list ken)
{
	char *str;
	int i;
	int length;

	str = va_arg(val, char *);
	if (str == NULL)
	{

		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
