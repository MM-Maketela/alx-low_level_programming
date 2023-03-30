/**
 * _strncat - Entry point
 * Description: concatinates two strings.
 * @src: pointer pointing to strng to be copied.
 * @dest: ponter pointing to destination fo copied string.
 * @n: the number of charecters in src pointer.
 * Return: (*dest) pointer;
 */
char *_strncat(char *dest, char *src, int n)
{
	int len1;
	int len2;
	int startconcat;

	len1 = 0;
	len2 = 0;
	startconcat = 0;

	while (1)
	{
		if (dest[len1] == '\0')
		{
			startconcat = 1;
		}

		if (startconcat)
		{
			if (len2 < n)
				dest[len1] = src[len2];
			else
				return (dest);
			len2++;
		}
		len1++;
	}
	return (dest);
}
