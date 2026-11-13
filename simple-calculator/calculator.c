#include <stdio.h>
#include <string.h>

/** prototypes */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

/* main - Emtry point */
int main(void)
{
	char user_input[15];
	int calc_is_on;
	int a;
	int b;
	int sum;

	printf("hello, this a terminal based calculator!\n");
	
	calc_is_on = 1;
	while (calc_is_on)
	{
		printf("options: add, subtract, multiply and divide\n");
		printf("type your option:(type 'exit' to abort)\n>> ");
		scanf("%14s", user_input);

		if (strcmp(user_input, "exit") == 0)
		{
			printf("aborting\n");
			calc_is_on = 0;
		} else if
			(strcmp(user_input, "add") != 0 &&
			strcmp(user_input, "subtract") != 0 &&
   			strcmp(user_input, "multiply") != 0 &&
			strcmp(user_input, "divide") != 0)
		{
			printf("error: invalid input");
		}
		else
		{
			printf("type number 1:\n>> ");
			scanf("%d", &a);
			printf("type number 2:\n>> ");
			scanf("%d", &b);
		

			if (strcmp(user_input, "add") == 0)
			{
				sum = add(a, b);
				printf("the total is: %d\n", sum);
			}
			else if (strcmp(user_input, "subtract") == 0)
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
			/* ask user if he wants to do another operation */
				printf("do you want to do another operation?(y or n)\n");
				scanf("%14s", user_input);
			if (strcmp(user_input, "n") == 0)
			{
				calc_is_on = 0;
			}
		}
	}
	printf("byebye\n");
	return (0);
}

/** add function - returns an addition */
int add(int a, int b)
{
	return (a + b);
}

/** subtract function - returns a subtraction */
int subtract(int a, int b)
{
	return (a - b);
}

/** muliply function - returns a multiplication */
int multiply(int a, int b)
{
	return (a * b);
}

/** divide function - return a dividion */
int divide(int a, int b)
{
	return (a / b);
}

