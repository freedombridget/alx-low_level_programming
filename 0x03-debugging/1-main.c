#include <stdio.h>

/**
 * main - causes an infinite loop
 *
 * Return: 0
 */
int main(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop incoming :( \n");
	printf("Infinite loop avoided! \n");

	return (0);
}
