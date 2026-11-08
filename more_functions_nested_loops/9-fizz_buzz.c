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
		if (n != 1)
		{
			printf(" ");
		}
		if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", n);
		}
		n++;
	}
	printf(" ");
	return (0);
}
