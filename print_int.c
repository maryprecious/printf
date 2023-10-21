#include "main.h"

/**
 * print_int - will print integer
 * @args: the arguement to really print
 * Return: will return the number of chracters
 */
int print_int(va_list args)
{
	int n = va_args(args, int);
	int num, last = n % 10, digit, exp = 1;
	int i = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = - last;
		i++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (expo > 0)
		{
			digit = num / expo;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	putchar(last + '0');
       return (i);
}
#include "main.h"

/**
 * print_dec - will print your decimal for you
 * @args: the arguement to really print
 * Return: will return the number of chracters
 */
int print_dec(va_list args)
{
        int n = va_args(args, int);
        int num, last = n % 10, digit, exp = 1;
        int i = 1;

        n = n / 10;
        num = n;

        if (last < 0)
        {
                _putchar('-');
                num = -num;
                n = -n;
                last = - last;
                i++;
        }
        if (num > 0)
        {
                while (num / 10 != 0)
                {
                        exp = exp * 10;
                        num = num / 10;
                }
                num = n;
                while (expo > 0)
                {
                        digit = num / expo;
                        _putchar(digit + '0');
                        num = num - (digit * exp);
			exp = exp / 10;
                        i++;
                }
        }
        putchar(last + '0');
       return (i);
}
