#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints numbers of base 16.
 * Return: 0 (success)
 */
int main(void)
{
	char string[] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
