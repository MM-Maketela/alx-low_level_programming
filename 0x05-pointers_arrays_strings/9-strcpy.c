#include "main.h"
/**
 * _strcpy - Entry point
 * Description: copies a string from one pointer to another.
 * @src: pointer pointing to strng to be copied.
 * @dest: ponter pointing to destination fo copied string.
 * Return: (*dest) pointer;
 */
char *_strcpy(char *dest, char *src)
{
	int len;

	len = 0;

	while (1)
	{
		dest[len] = src[len];
		if (dest[len] == '\0')
			break;
		len++;
	}
	return (dest);
}
