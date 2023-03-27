#include "main.h"
/**
 * _strlen - Entry point
 * Description: this function return length of string;
 * @s: pointer pointing to an integer.
 * Return: int (the length of string);
 */
int _strlen(char *s)
{
	 unsigned int count;

	count = 0;
	while (*s != 0)
	{
		s++;
		count++;
	}
	return (count);

}
