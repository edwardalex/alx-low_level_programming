#include "main.h"
#include <stdio.h>
/**
 * main - this program prints every minute
 *
 * Return: sum
 */
int main(void)
{
	long n = 0;
	long term1 = 1;
	long term2 = 2;
	long nextTerm = term1 + term2;

	printf("%ld, %ld, ", term1, term2);

	for (n = 0; n <= 47; n++)
	{
		printf("%ld", nextTerm);
		if (n < 47)
		{
			printf(", ");
		}
		term1 = term2;
		term2 = nextTerm;
		nextTerm = term1 + term2;
	}
	printf("\n");
	return (0);
}
