#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: nothing, return void
 */
int main(void)
{
	long int num;
	long int num_1 = 0;
	long int num_2 = 1;
	long int nextTerm;

	for (num = 0; num < 50; ++num)
	{
		nextTerm = num_1 + num_2;
		num_1 = num_2;
		num_2 = nextTerm;

		if (num != 49)
		{
			printf("%ld, ", nextTerm);
		}
		else
		{
			printf("%ld\n", nextTerm);
		}
	}

	return (0);
}
