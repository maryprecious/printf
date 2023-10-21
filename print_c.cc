#include "main.h"

/**
 * printf_char - please print a character
 * @ken: print a proper arguement
 * Return: 1.
 */
int printf_char (va_list ken)
{
        char str;

        str = va_arg(ken, int);
        _putchar(str);
        return (1);
}
~                    
