#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 97;

		while (j <= 122)
		{
			_putchar(j);
			j++;
		}
		i++;
		_putchar('\n');
	}
}

