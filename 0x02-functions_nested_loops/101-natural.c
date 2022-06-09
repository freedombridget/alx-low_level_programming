#include <stdio.h>
/**
 * main - increasing and decreasing until 98
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, result;

	x = 0;
	result = 0;

	while (x < 1024)
	{
		if (x % 3 == 0 || x % 5 == 0)
			result += x;
		x++;
	}

	printf("%d\n", result);
	return (0);
}	
