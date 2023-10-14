#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdarg.h>
#include <unistd.h>

int _printf4(const char *format, ...);
int _putchar(char c);
int print_unsigned(va_list args);
int print_octal(va_list args);
int print_hex(va_list args);
int print_hex_upper(va_list args);

#endif /* HOLBERTON_H */

