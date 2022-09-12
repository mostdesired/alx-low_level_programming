#include <stdio.h>

/**
 * main - this program prints letters in lowercase and in uppcase
 *
 * Description: using main print alphabets in
 * both cases form putchar
 * Return: 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
