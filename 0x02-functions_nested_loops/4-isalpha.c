#include "main.h"
/**
 * _isalpha - entry point
 * Description: checks if a charecter is alphabet.
 * @c: takes a paremeter of type char.
 * Return: 1 (if is alphabet) and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
