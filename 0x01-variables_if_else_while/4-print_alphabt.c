#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints charactors of the alphabet but e and q.
 * Return: 0 (success)
 */
int main(void)
{
	int i;

	char string[] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		if (string[i] != 'e' && string[i] != 'q')
		{
			putchar(string[i]);
		}
	}
	putchar('\n');
	return (0);
}
