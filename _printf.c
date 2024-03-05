#include "main.h"
/**
 * _printf - our make shift printf file
 * @format: Input to print
 * Return: 0
 */

int _printf(const char *format, ...)
{
	printer p[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", print_percent}
	};
	va_list args;
	int i = 0;
	int t;
	int len = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
Here:
	while (format[i] != '\0')
	{
		t = 2;
		while (t >= 0)
		{
			{
				if (p[t].id[0] == format[i] && p[t].id[1] == format[i + 1])
				{
					len += p[t].f(args);
					i += 2;
					goto Here;
				}

			} t--;	}
		if (format[i] != '\0')
		{
		_putchar(format[i]);
		len++;
		i++;
		}	}
	va_end(args);
	return (len);
}
