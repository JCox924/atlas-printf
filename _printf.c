#include <stdio.h>
#include "main.h"
FILE *fp;

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

	while (*format) /** Our loop through the string */
	{
		if(*format != '%')/** if character is not '%' print */
		{
		fwrite(format, sizeof(char), 1, fp);
		print++; /** print the character to stdout */
		}
		else /** if the next character is '%' */
		{
			format++;/** skip the '%' and move to the next */
			if (*format == '\0')
				break;/** stop */ 
			if (*format == 'c')/** if next char is c */
			{
				c = va_arg(args, int);
				fwrite(&c, sizeof(char), 1, fp);
				print++;
			}
			else if (*format == 's')/**if the next char is 's'*/
			{
				s = va_arg(args, char*);
				fwrite(s, sizeof(char), strlen(s), fp);
			}
			else if (*format == '%')/** if next char is '%' print it */
			{
				 fwrite(format, sizeof(char), 1, fp);
				 print++;
			}
		}
		format++;
	}
	va_end(args);
	return (print);
}
