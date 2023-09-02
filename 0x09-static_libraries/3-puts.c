#include "main.h"
#include <stdio.h>

/**
 * custom_puts - Prints a string followed by a new line
 * @str: The string to be printed
 */
void custom_puts(char *str)
{
	puts(str);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	custom_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
