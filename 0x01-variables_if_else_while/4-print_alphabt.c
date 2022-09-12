#include <stdio.h>

/**
 * main - prints all letters except e and q
 *
 * Description: using main if letters are not
 * equal to e and q print
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	}
	putchar('\n');
	return (0);
}
