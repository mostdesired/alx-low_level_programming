#include <stdio.h>

/**
 * main - this program alphabet in lowercase
 *
 * Description: using main print alphabets in lower
 * form putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a', ch <= 'z', ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
