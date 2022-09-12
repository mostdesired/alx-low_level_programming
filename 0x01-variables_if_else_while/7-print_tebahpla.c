#include <stdio.h>

/**
 * main - printss lowercase alphabets in reverse
 *
 * Description: using main print lowercase alphabets in reverse
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);

}
