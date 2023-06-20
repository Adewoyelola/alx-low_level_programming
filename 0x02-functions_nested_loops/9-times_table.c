/**
  * times_table - prints the 9 times table
  * Return: result of table
  */
void times_table(void)
{
	for(int i  0; i <= 10; i++)
	{
		int j = i * 9;

		_putchar('9');
		_putchar(' ');
		_putchar('x');
		_putchar(' ');
		_putchar(i + '0');
		_putchar(' ');
		_putchar('=');
		_putchar(' ');
		if (j < 10)
		{
			_putchar(j + '0');
		}
		else 
		{
			_putchar(j / '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
					
}
