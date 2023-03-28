#include "main.h"
/**
 * rev_string - Entry point
 * Description: prints a string in revers.
 * @s: pointer pointing to strng.
 * Return: void;
 */
void rev_string(char *s)
{
	int count;
	char tempChar;
	int index;

	count = 0;

	while (s[count] != '\0')
	{
		count++;
	}

	for (index = count - 1; index >= count / 2; index--)
	{
		tempChar = s[index];
		s[index] = s[count - index - 1];
		s[count - index - 1] = tempChar;
	}
}
