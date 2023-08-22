#include "main.h"

/**
 * _printf - a prototye function of printf
 * @format: the format string to be printed
 * @...: the number of parameters given to the string
 *
 * Return: Length of the string printed
 */

int _printf(const char *format, ...)
{
	int len = 0, i;
	int variables = 0;
	va_list place_holders;
	
	if (!format || (format[0] == '%' && !forrmat[1]))
	       return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	for (i = 0; i < strlen(format); i++)
	{
		if (format[i] == '%')
		{
			variables++;
			i++;
		}
	}
	if (!variables)
	{
		_puts(format);
		return (strlen(format));
	}
	va_start(place_holders, variables);
	
	
	
	va_end(place_holders);
	}
	return (len);
}
