#include "main.h"
/**
 * print_array - Entry point
 * Description: prints elements of array.
 * @a: pointer pointing to int array.
 * @n: is the number of elements in array.
 * Return: void;
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
			printf("%d, ", a[index]);
		else
			printf("%d", a[index]);
	}
	printf("\n");
}
