#include "main.h"

/**
 * print_int - formats the given integer and prints it
 * @place_holders: integer to be formatted
 *
 * Return: number of the bytes printed.
 */
int print_int(va_list place_holders)
{
	return (print_number(va_arg(place_holders, int)));
}

/**
 * print_char - formats the given character and prints it
 * @place_holders: char to be formatted
 *
 * Return: Always 1 byte.
 */
int print_char(va_list place_holders)
{
	_putchar(va_arg(place_holders, char));
	return (1);
}

/**
 * print_str - formats the given string and prints it
 * @place_holders: string to be formatted
 *
 * Return: number of the bytes printed.
 */
int print_str(va_list place_holders)
{
	return (_puts(va_arg(place_holders, char *));
}

/**
 * print_percent - prints the sign % to the stdout
 *
 * Return: 1 byte.
 */
int print_percent(void)
{	
	_putchar('%');
	return (1);
}
