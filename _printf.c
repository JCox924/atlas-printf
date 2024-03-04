 #include "main.h"

int _printf(const char *format, ...)
{
	printer p[] = 
	{{"%s", printf_string}, {"%c", printf_char}, {"%%", print_percent}
	};

	va_list args;
	int i;
	int len;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'));
