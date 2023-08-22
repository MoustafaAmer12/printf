#include "main.h"

/**
 * get_specifier - find the format specifier
 * @s: the format string
 *
 * Return: the number of bytes printed.
 */
int (*get_specifier(char *s))(va_list place_holders)
{
	specifier_t specifiers[] = {
		{"c", print_char},
		{"d", print_int},
		{"i", print_int},
		{"s", print_str},
		{"%", print_percent},
		{"b", print_binary},
		{"o", print_octal},
		{"u", print_unsigned},
		{"x", print_hex},
		{"X", print_hexC},
		{"p", print_addr},
		{"S", print_S},
		{"r", print_rev},
		{"R", print_rot},
		{NULL, NULL}
	};
	int i = 0;

	while (specifiers[i].specifier)
	{
		if (*s == specifiers[i].specifier[0])
		{
			return (specifiers[i].f);
		}
		i++;
	}
	return (NULL);
}

/**
 * get_print_func - finds the formatfunc
 * @s: the format string
 * @place_holders: the arguments given
 *
 * Return: number of bytes printed
 */
int get_print_func(char *s, va_list place_holders)
{
	int (*f)(va_list) = get_specifier(s);

	if (f)
		return (f(place_holders));
	return (0);
}

/**
 * *get_flag - finds the flag func
 * @s: format string
 * @params: params struct
 * Return: if flag was valid
 */

int get_flag(char *s, params_t *params)
{
	int i = 0;

	switch (*s)
	{
		case '+':
			i = params->plus_flag = 1;
			break;
		case ' ':
			i = params->space_flag = 1;
			break;
		case '#':
			i = params->hashtag_flag = 1;
			break;
		case '-':
			i = params->minus_flag = 1;
			break;
		case '0':
			i = params->zero_flag = 1;
			break;
	}
	return (i);
}
