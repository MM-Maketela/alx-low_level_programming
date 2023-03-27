#include "main.h"
/**
 * swap_int - Entry point
 * Description: swapping the values between pointers.
 * @a: pointer pointing to int.
 * @b: pointer pointing to int.
 * Return: void;
 */
void swap_int(int *a, int *b)
{
	int value;

	value = *a;
	*a = *b;
	*b = value;
}
