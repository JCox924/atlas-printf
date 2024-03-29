#include "main.h"
/**
 * printf_string - To print a string
 * @args: arg
 * Return: the length of the string
 */

int printf_string(va_list args)
{
	int len;
	int i;
	char *s;

	s = va_arg(args, char*);/** essentially malloc for va_arg*/
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
			_putchar(s[i]);
		return (len);
	}
}
