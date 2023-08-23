#include <stdio.h>
/**
 * main - initializes an integer array 'a' and an integer 'n'.
 * It then calculates a memory address 'p' for 'n' and updates
 * the value at the address 'p + 5' to be 98. Afterward, it prints
 * the value of 'a[2]' and returns 0 to indicate successful completion.
 *
 * Return: Always 0.
 */
int main(void)
{
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
*(p + 5) = 98;
printf("a[2] = %d\n", a[2]);
return (0);
}
