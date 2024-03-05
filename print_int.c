#include "main.h"
/**
 * printf_int - prints a integar
 * @args: Argument
 * Return: 0
 */

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int i = 1;
	int num;
	int last = n % 10;
	int digit;
	int exp = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
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
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit *exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');
	return (i);
}
