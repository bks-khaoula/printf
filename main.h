#ifndef _PRINTF_H
#define _PRINTF_H
#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

void write_char(char c, int *count);
void write_str(char *str, int *count);
void write_nbr(int n, int *count);
int char_check(char const c);
void _print_cases(const char form, va_list args, int *count);
int _printf(const char *format, ...);

#endif
