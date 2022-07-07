#include "main.h"

void print_int_as_char(int, int);

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number to print table for
 */
void print_times_table(int n)
{
	int i, j, k;

	if (n > 15 || n < 0)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			print_int_as_char(k, j);

			if (j != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
