#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the size of various types.
 * Return: 0 (success).
 */
int main(void)
{
int number;
char charector;
char string[];
long longNumber;
long long longLongNumber;
float decimalNumber;
printf("Size of a char: %c\n", sizeof(charector));
printf("Size of an int: %d\n", sizeof(number));
printf("Size of a long int: %lu\n", sizeof(longNumber));
printf("Size of a long long int: %llu\n", sizeof(longLongNumber));
printf("Size of a float: %f\n", sizeof(decimalNumber));
return (0);
}
