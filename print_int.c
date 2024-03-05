#include "main.h"
/**
 * printf_int - prints a integar
 * @args: Argument
 * Return: 0
 */

int printf_int(va_list args)
{
	int n = va_arg(args, int);
	int num;
	int ter = n % 10;
	int digit;
	int exp = 1;
	int i = 1;

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
