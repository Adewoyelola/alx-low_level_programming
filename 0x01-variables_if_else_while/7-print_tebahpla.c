#include <stdio.h>

/**
 * main - Entry point
 * Description - program prints alphabet in reverse as tebapla
 * * Return: Always (0) unless error
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
