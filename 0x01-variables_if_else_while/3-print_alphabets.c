#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the charactors ofthe alphabet.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	char string[] = "abcdefghijklmnopqrstuvwxyz";
	char string1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; i < 26; i++)
	{
		putchar(string[i]);
	}

	for (i = 0; i < 26; i++)
	{
		putchar(string1[i]);
	}

	putchar('\n');
	return (0);
}
