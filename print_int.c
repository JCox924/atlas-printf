#include "main.h"
/**
 * printf_int - prints a integar
 * @args: Argument
 * Return: 0
 */
int printf_int(va_list args) {
    int n = va_arg(args, int);
    int i = 0;
    int last;

    if (n < 0) {
        _putchar('-');
        n = -n;
        i++;
    }

    if (n == 0) {
        _putchar('0');
        return 1;
    }

    while (n > 0) {
        last = n % 10;
        _putchar(last + '0');
        n = n / 10;
        i++;
    }

    return i;
}
