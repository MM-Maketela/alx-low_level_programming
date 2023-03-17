#include <stdio.h>
/**
 * main - Entry point
 * Description: A program that prints the size of various types.
 * Return: 0 (success).
 */
int main(void)
{
int number = 5;
char charector = '5';
char string[5] = "hello";
long longNumber = 5;
long long longLongNumber = 5;
float decimalNumber = 5.1f;
printf("Size of a char: %ld byte(s)\n", sizeof(charector));
printf("Size of an int: %ld byte(s)\n", sizeof(number));
printf("Size of a long int: %ld byte(s)\n", sizeof(longNumber));
printf("Size of a long long int: %ld byte(s)\n", sizeof(longLongNumber));
printf("Size of a float: %ld byte(s)\n", sizeof(decimalNumber));
return (0);
}
