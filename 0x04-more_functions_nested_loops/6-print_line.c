#include "main.h"
#include "unistd.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: the length of the line
 * Return: a straight line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
