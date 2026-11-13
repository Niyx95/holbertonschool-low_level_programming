#include <stdio.h>
#include <string.h>
/**
 * prototypes
 */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

int main(void)
{
	char user_input[15];
	int calc_is_on;
	int a;
	int b;
	int sum;

	calc_is_on = 1;

	while (calc_is_on)
	{
		printf("welcome to terminal based calclator..\noptions: add, subtract, multiply and divide");
		printf("type your option:(type 'exit' to abort)\n>>");
		scanf("%14s", user_input);

		if (strcmp(user_input, "exit") == 0)
		{
			printf("aborting\n");
			break;
		}
		printf("type number 1:\n>>");
		scanf("%d\n", &a);
		printf("type number 2:\n>>");
		scanf("%d\n", &b);

		if (strcmp(user_input, "add") == 0)
		{
			sum = add(a, b);
			printf("the total is: %d\n", sum);
		}
		else if (strcmp(user_input, "subtarct") == 0)
		{
			sum = subtract(a, b);
			printf("the total is: %d\n", sum);

		}
		else if (strcmp(user_input, "multiply") == 0)
		{
			sum = multiply(a, b);
			printf("the total is: %d\n", sum);

		}
		else if (strcmp(user_input, "divide") == 0)
		{
			sum = divide(a, b);
			printf("the total is: %d\n", sum);
		}
	}
	return (0);
}
/**
 * add - function that return an addition.
 *@a: - int to add
 *@b: - int to add
 *
 * Return: int (integer)
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * subtract - function that return a subtraction.
 *@a: - int to subtract
 *@b: - int to subtract
 *
 * Return: int (integer)
 */
int subtract(int a, int b)
{
	return (a - b);
}
/**
 * multiply - function that return a multiplication.
 *@a: - int to multiply
 *@b: - int to multiply
 *
 *
 */
int multiply(int a, int b)
{
	return (a * b);
}
/**
 * divide - function that return a division.
 *@a: - int to divide
 *@b: - int to divide
 *
 * Return: int (integer)
 */
int divide(int a, int b)
{
	return (a / b);
}

