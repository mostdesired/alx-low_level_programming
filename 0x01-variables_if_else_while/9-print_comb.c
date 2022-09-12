#include <stdio.h>

/**
 * main - this program prints all possible combinations of single-digit numbers
 *
 * Description: using main prints all possible
 * combinations of single-digit numbers.
 * Numbers should be printed in ascending order
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar(c);
		if (c !=57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
