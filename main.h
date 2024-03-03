#ifndef MAIN_H/** can we change to MAIN_H?*/
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int printf_string(va_list args);
int printf_char(va_list args);
int _putchar(char c);
int _strlen(char *s);
int _strlencon(const char *s);
int print_%(void);


#endif
