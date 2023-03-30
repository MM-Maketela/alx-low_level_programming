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

	len1 = 0;
	len2 = 0;

	while (dest[len1] != '\0')
	{
		len1++;
	}
	while (len2 < n && src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}
	dest[len1] = '\0';

	return (dest);
}
