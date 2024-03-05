#include "main.h"

/**
 * printf_char - Prints single character
 * @args: Function Pointer
 * Return: 1
 */
int printf_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}
