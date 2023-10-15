#include "main.h"
/**
 * _printf - print formartted text
 *
 * @format: formatter
 * Return: any number of printed text
 */
int _printf(const char *format, ...)
{
	unsigned int pret = 0, ij, count, di_count = 0;

	va_list args;

	if (!format || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	va_start(args, format);

	for (ij = 0; format[ij] != '\0'; ij++)
	{
		if (format[ij] != '%')
		{
			putchr(format[ij]);
		}
		else if (format[ij] == '%' && format[ij + 1] == 'c')
		{
			putchr(va_arg(args, int));
			ij++;
		}
		else if (format[ij] == '%' && format[ij + 1] == 's')
		{
			count = dee_puts(va_arg(args, char *));
			pret += (count - 1);
			ij++;
		}
		else if (format[ij] == '%' && (format[ij + 1] == '%'))
		{
			putchr('%');
			ij++;
		}
		else if (format[ij + 1] == 'd' || format[ij + 1] == 'i')
		{
			di_count += _putint(va_arg(args, int));
			ij++;
			pret += (di_count - 1);
		}
		else
		{
			putchr('%');
		}
		pret += 1;
	}
	va_end(args);
	return (pret);
}
