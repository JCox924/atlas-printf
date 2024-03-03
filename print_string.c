#include "main.h"
/**
 * print_string - To print a string
 * @args: arg
 * Return: the length of the string
 */

int print_string(va_list args)
{
	int len;
	int i;
	char *s;

	s = va_arg(args, char*);/** essentially malloc for va_arg*/
	if (s == NULL)
	{
		s = "(null)";
		len = strlen(s);
		for (i = 0; i < len, i++)
		{
			putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = strlen(s);
		for (i = 0; i < len; i++)
		{
			putchar(s[i]);
		}
		return (len);
	}

