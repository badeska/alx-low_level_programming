#include "main.h"

/**
 * _putchar - Writes a character to standard output
 * @c: The character to write
 *
 * Return: On success, returns the number of characters written.
 * On error, returns -1 and sets errno.
 */

int _putchar(char c)
{
	return (1, &c, 1);
}

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if positive, 0 if zero, -1 if negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
