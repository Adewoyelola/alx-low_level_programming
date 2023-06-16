#include <stdio.h>

/**
 * main - Entry point
 * Description - program prints alphabets in lowercase, followed
 * by a new line, except letters q and e
 *
 * Return: Always (0) unless error
 */
int main(void)
{
	char letter, e, q;

	e = 'e';
	q = 'q';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != q && letter != e)
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}
