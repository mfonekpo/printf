#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
int print_char(char c);
int print_string(char *s);
int _printf2(const char *format, ...);
int _printf3(const char *format, ...);
int print_binary(unsigned int num);
int _printf4(const char *format, ...);
void buffer_to_stdout(void);
#endif /* MAIN_H */

