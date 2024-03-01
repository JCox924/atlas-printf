#include <stdio.h>
#include "main.h"

int _printf(const char *format, ...)
{
	int print;
	int c;
	char *s;

	va_list args;

	if (format == NULL)
	{
		return (-1);
	}

	va_start(args, format);

	while (format)
	{
		if(format != '%')
		{
		write(1, &format, 1);
		print++;
		}
		else
		{
			format++;
			if (*format == '\0')
				break;
			if (*format == 'c')
			{
				c = va_arg(args, int);
				write(1, &c, 1);
				print++;
			}
			if (*format == 's')
			{
				s = va_arg(args, char *);
				write(1, &s, 1);
				print++;
			}
			if (*format == '%')
			{
				 = va_arg(args, );
				 write(1, , 1);
				 print++;
			}


	va_end(args);


