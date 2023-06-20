#include "main.h"

/**
  * print_alphabet_x10 - prints lowercase alpha in ten places
  * Return: success
  */
void print_alphabet_x10(void)
{
	char alp;
	int num_of_times;

	for (num_of_times = 0; num_of_times < 10; num_of_times++)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
		{
			_putchar(alp);
		}
		_putchar('\n');
	}
}
