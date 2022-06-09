#include "main.h"
/**
 * print_square - prints a square
 * @size: print size
 * Return: Always 0.
 */
void print_square(int size)
{
	int i;
	int z;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar (35);
			}
			_putchar ('\n');
		}
	}
	else
	{
		_putchar ('\n');
	}
}
