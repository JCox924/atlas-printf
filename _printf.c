 #include "main.h"

int _printf(const char *format, ...)
{
	printer p[] =
        {{"%s", printf_string}, {"%c", printf_char}, {"%%", print_percent}
        };

	va_list args;
	int i;
	int t;
	int len;

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
			if(p[t].id[0] == format[i] && p[t].id[1] == format[i + 1])
			{
				len = len + p[t].f(args);
				i = i + 2;
				goto Here;
				;
			}
			t--;

		}
		_putchar(format[i]);
		i++;
		len++;
	}
	va_end(args);
	return (len);
}
