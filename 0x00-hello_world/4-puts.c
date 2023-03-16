/*
 * description
 *Header file:     #include <stdio.h>
 *Declaration:     int puts(const char *str);
 *Return:          returns a nonnegative value on success or an EOF upon failure.
*/
# include <stdio.h>
# include <string.h>
int main(void)
{	/*Declaration:     int puts(const char *str);*/
	char str1[] = "\"Programming is like building ";
	char str2[] = "a multilingual puzzle";
	strcat(str1,str2);
	puts(str1);
	return (0);
}
