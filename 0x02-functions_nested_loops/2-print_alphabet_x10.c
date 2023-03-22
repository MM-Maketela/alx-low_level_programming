#include "main.h"
/**
 * print_alphabet_x10 - entry point
 * Description: a program that prints out the letter of alphabet a-z X10.
 * Return: void(succesis)
 */
void print_alphabet_x10(void)
{
	int i;
	char string[] = "abcdefghijklmnopqrsttuvwxyz";

	for (i = 0; i < 10; i++)
	{
		int j;

		for (j = 0; j < 26; j++)
		{
			_putchar(string[j]);
		}
		_putchar('\n');
	}
}
