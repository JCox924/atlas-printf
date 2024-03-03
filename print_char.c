#include "main.h"

/**
 * print_char - Prints single character
 * @s: Function Pointer
 * Return: 0
 */
int print_char(va_list args)
{
	char s;

	s = va_args(args, int);
	_putchar(s);
	return(0);
}
	
