#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>

int _printf(const char *format, ...);
void print_char(va_list args);
void print_string(va_list args);
int print_char(char c);
int print_string(char *s);
int _printf2(const char *format, ...);
int _printf3(const char *format, ...);
int print_binary(unsigned int num);
int _printf4(const char *format, ...);
void buffer_to_stdout(void);
int _printf5(const char *format, ...);
void custom_print_string(char *str);
int _printf6(const char *format, ...);
void print_pointer(void *ptr);


#endif /* MAIN_H */

