#include "main.h"
/**
 * _abs - entry point
 * Description: checks if a charecter is alphabet.
 * @n: takes an int then computes the absolute value.
 * Return: n (if is n is positve) and  n * -1  otherwise.
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
