#include <stdio.h>
#include <string.h>

/** prototypes */
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
int divide(int a, int b);

/* main - Entry point */
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
		printf("Select:\n1: add\n2: subtract\n3: multiply\n4: divide\n");
		printf("type your option:(type 'exit' to abort)\n>> ");
		scanf("%14s", user_input);

		if (strcmp(user_input, "exit") == 0)
		{
			printf("aborting\n");
			calc_is_on = 0;
		} else if
			(strcmp(user_input, "1") != 0 &&
			strcmp(user_input, "2") != 0 &&
   			strcmp(user_input, "3") != 0 &&
			strcmp(user_input, "4") != 0)
		{
			printf("error: invalid input\n");
		}
		else
		{
			printf("type number 1:\n>> ");
			scanf("%d", &a);
			printf("type number 2:\n>> ");
			scanf("%d", &b);

			if (strcmp(user_input, "1") == 0)
			{
				sum = add(a, b);
				printf("the total is: %d\n", sum);
			}
			else if (strcmp(user_input, "2") == 0)
			{
				sum = subtract(a, b);
				printf("the total is: %d\n", sum);

			}
			else if (strcmp(user_input, "3") == 0)
			{
				sum = multiply(a, b);
				printf("the total is: %d\n", sum);

			}
			else if (strcmp(user_input, "4") == 0)
			{
				if (b == 0)
				{
					printf("operation not permitted\n");
				}
				else
				{
					sum = divide(a, b);
					printf("the total is: %d\n", sum);
				}
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
	printf("bye-bye\n");
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

