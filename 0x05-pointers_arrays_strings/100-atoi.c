#include "main.h"
/**
 * _atoi - Entry point
 * Description: convert string to int.
 * @s: pointer pointing to strng.
 * Return: 0 of no nubers;
 */

int len(*s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

int _atoi(char *s)
{
	int i;

	for (i = 0; i < len(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			
		}
	}
}
