#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: prints the lowercase alphabet in reverse
 * starting with z, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
int n;

for (n = 'z'; n >= 'a'; n--)
{
	putchar(n);
}
	putchar('\n');

	return (0);
}
