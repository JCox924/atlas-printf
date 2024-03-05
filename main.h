#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include <limits.h>
#include <stdlib.h>
#include <string.h>

typedef struct format
{
	char *id;
	int (*f)();
} printer;

int _printf(const char *format, ...);
int printf_string(va_list args);
int printf_char(va_list args);
int _putchar(char c);
int _strlen(char *s);
int _strlencon(const char *s);
int print_percent(void);


#endif
