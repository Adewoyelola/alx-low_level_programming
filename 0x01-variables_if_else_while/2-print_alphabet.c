#include <stdio.h>
/* more headers goes there */
/**
 * main - A c program that prints a alphabet in lowercase
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar(32);
	return (0);
}
