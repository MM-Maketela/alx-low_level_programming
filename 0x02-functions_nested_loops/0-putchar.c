#include <string.h>
#include "main.h"
/**
 * main - Entry point
 * Description: A program that prints _putchar.
 * Return: 0 (success)
 */
int main(void)
{
	char string [] = "_putchar";
	size_t i;

	for (i = 0; i < sizeof(string); i++)
	{
		_putchar(string[i]);
	}
	putchar('\n');
	return (0);
}
