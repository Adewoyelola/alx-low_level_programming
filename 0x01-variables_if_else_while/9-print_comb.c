#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: program to print combination
 * Return: Always 0 (Success);
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
	}
	if (a != 9 && a < 10)
	{
		putchar('\n');
	}
	

	return (0);
}
