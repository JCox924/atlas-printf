#include "main.h"

int _printf(const char *format, ...)
{
	printer p[] =
        {{"%s", printf_string}, {"%c", printf_char}, {"%%", print_percent}
        };

	va_list args;
	int i;
	int t = 0;
	int len;
	int struc_size = sizeof(p) / sizeof(p[0]);

	va_start(args, format);
	
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}

	while (format[i] != '\0')
	{
		for (; t < struc_size; t++)
		{
			if(p[t].id[0] == format[i] && p[t].id[1] == format[i + 1])
			{
				len += p[t].f(args);
				i += 2;
				break;
			}

		}
		if (format[i] != '\0')
		{
		_putchar(format[i]);
		i++;
		len++;
		}
	}

	va_end(args);
	return (len);
}
