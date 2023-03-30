#include "main.h"
/**
 * _strcat - Entry point
 * Description: concatinates two strings.
 * @src: pointer pointing to strng to be copied.
 * @dest: ponter pointing to destination fo copied string.
 * Return: (*dest) pointer;
 */
char *_strcat(char *dest, char *src)
{
	int len1;
	int startconcat;
	int len2;


	len1 = 0;
	len2 = 0;
	startconcat = 0;

	while (1)
	{
		if (dest[len1] == '\0')
			startconcat = 1;

		if (startconcat)
		{
			dest[len1] = src[len2];

			if (src[len2] == '\0')
				return (dest);
			len2++;
		}
		len1++;
	}
	return (dest);
}
