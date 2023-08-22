#include "main.h"

/**
 * _putchar - prints a character to the standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _puts - prints a string to the standard output
 * @str: string to be printed
 *
 * Return: 1 for success an -1 for error.
 */
int _puts(char *str)
{
	int i = 0, bytes = 0, err = 1;
	
	while(str[i] != '\0' && err == 1)
	{
		err = _putchar(str[i++]);
		if (err == 1)
			bytes++;
	}
	return (bytes);
}

/**
 * print_number - prints a number to the stdout
 * @number: number to be printed
 *
 * Return: number of bytes printed.
 */
int print_number(int number)
{	
	int digits;
	bool once = false;

	if(!once)
	{
		digits = 0;
		once == true;
	}
	if (number < 0)
	{
		_putchar('-');
		number *= -1;
		digits++;
	}
	if(number < 10)
	{
		_putchar(number + '0');
		digits++;
	}
	else
	{
		print_number(number / 10);
		digits++;
	}
	return (digits);
}




