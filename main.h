#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#define NULL_STRING "(null)"

int _putchar(char c);
int _puts(char *str);
void print_number(int number);

int print_int(va_list arg)
int print_char(va_list arg) 
int print_str(va_list arg)
int print_percent(void);

int _printf(const char *format, ...);

#endif
