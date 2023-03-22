#include "main.h"
/**
 * _islower - entry point
 * Description: checks if a charecter is lower.
 * @c: takes a paremeter of type char.
 * Return: 1 (if is lower) and 0 otherwise.
 */
int _islower(int c)
{
	char string[] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == string[i])
		{
			return (1);
		}
	}
	return (0);
}

