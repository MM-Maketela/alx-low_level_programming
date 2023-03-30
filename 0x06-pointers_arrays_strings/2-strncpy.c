/**
 * _strncpy - Entry point
 * Description: concatinates two strings.
 * @src: pointer pointing to strng to be copied.
 * @dest: ponter pointing to destination fo copied string.
 * @n: the number of charecters in src pointer.
 * Return: (*dest) pointer;
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (dest);
}
