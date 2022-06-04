#include <stdio.h>
#include <stdlib.h>

/**
 * main program for the number
 * numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 0;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
		if (i < 9)
		putchar(44);
		if (i < 9)
		putchar(32);	
	}
	return (0);
}	
