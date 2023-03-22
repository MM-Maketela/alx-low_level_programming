#include "main.h"
/**
 * print_alphabet - entry point
 * Description: a program that prints out the letter of alphabet a-z.
 * Return: void(success)
 */
void print_alphabet(void)
{
	char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		_putchar(alphabets[i]);
	}
	_putchar('\n');
}
