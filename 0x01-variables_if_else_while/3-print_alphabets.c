#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all letters of the alphabet in lower case
 *
 * Return: 0 if successful
 */
int main(void)
{
	char var;

	for (var = 'a'; var <= 'z'; var++)
	{
		putchar(var);
	}

	for (var1 = 'A'; var1 <= 'Z'; var1++)
	{
		putchar(var1);
	}
	putchar('\n');
	return (0);
}
