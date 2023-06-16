#include <stdio.h>

/**
 * main - Entry point
 * Description - program prints all digit numbers of base 10 starting from 0,
 * followed by a new line
 * and not allowed to use any variable of type char
 * Return: Always (0) unless error
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	putchar('\n');

	return (0);
}
