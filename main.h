#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
void print_binary(unsigned int n, int *count);
void print_percent(int *count);
void print_string(va_list args, int *count);
void print_char(va_list args, int *count);
int _putchar(char c);
int _printf(const char *format, ...);
void print_integer(va_list args, int *count);
void handle_format_specifier(va_list args, int *count, const char *format);
void print_unsigned(va_list args, int *count);
void print_octal(va_list args, int *count);
void print_hex_lower(va_list args, int *count);
void print_hex_upper(va_list args, int *count);
void print_S(va_list args, int *count);
int string(char *str);
#endif

