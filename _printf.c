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

	va_end(args);
	return (print);
}
