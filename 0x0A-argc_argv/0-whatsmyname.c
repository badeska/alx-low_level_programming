#include <stdio.h>
#include "main.h"

/**
 * custom_print_program_name - Prints the name of the program
 * @argv: Array of arguments
 */
void custom_print_program_name(char *argv[])
{
	printf("%s\n", *argv);
}

/**
 * main - Entry point
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	custom_print_program_name(argv);
	return (0);
}
