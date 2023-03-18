#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the letters of the alphabets in reverse.
 * Return: 0 (success)
 */
int main(void)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
