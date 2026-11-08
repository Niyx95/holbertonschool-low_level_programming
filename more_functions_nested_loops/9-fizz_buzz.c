#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: always 0 (Success)
 */
int main(void)
{
	int n;
	int max;

	n = 1;
	max = 100;

	while (n <= max)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", n);
			printf(" ");
		}
		n++;
	}
	printf("\n");
	return (0);
}
