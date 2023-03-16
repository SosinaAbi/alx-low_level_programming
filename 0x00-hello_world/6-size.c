#include <stdio.h>
/**
 * main - This program prints size of 64 and 32 bits
 * Return: 0 if successful
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int llIntType;
	float floatType;

	/*sizof evaluates the size of a variable*/
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(llIntType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
