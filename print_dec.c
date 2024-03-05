#include "main.h"

/**
*print_dec - prints a decimal
*
*@args: arguments
*
*Return: integer
*/

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int num, ter = n % 10, digit;
	int i = 1;
	int exp = 1;

	n = n / 10;
	num = n;

	if (ter < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		ter = -ter;
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
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(ter + '0');

	return (i);
}
