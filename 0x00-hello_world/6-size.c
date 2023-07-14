#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("size of a char: %elu byte(s)\n", sizeof(char));
	printf("size of an int: %elu byte(s)\n", sizeof(int));
	printf("size of a long int: %elu byte(s)\n", sizeof(long int));
	printf("size of a long long int: %elu byte(s)\n", sizeof(long long int));
	printf("size of a float: %elu byte(s)\n", sizeof(float));
	return (0);
}
