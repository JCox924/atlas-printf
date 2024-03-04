 #include "main.h"

int _printf(const char *format, ...)
{
	int print;
	const char *c;
	char *s;

	va_list args;
	va_start(args, format);


	if (format == NULL)
	{
		return (-1);
	}
	for (*c = format; *c; c++)
	{
		if (*c == '%')
		{
			c++;
			print += _putchar(va_arg(args, int));
		}
		else if (*c == 's')
		{
			s = va_arg(args, char*);

			for (; *s;s++)
			{
				print += _putchar(*s);
			}
		}
		else if
		{
			print += _putchar('%');

			if (*c)
			{
				print += _putchar(*c);
			}
			else
			{
				c--;
			}
		}
		else
		{
			print += _putchar(*c);
		}

	}


	va_end(args);
	return (print);
}
