#include "main.h"

/**
 * print_char - Prints single character
 * @s: Function Pointer
 * Return: 1
 */
int printf_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return(1);
}
	
