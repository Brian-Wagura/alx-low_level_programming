#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>


int multiply(int num1, int num2);
int isNumber(char *ptr);

/**
 * multiply - Multiplies two numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: The result multiplication of
 * num1 and num2
 */

int multiply(int num1, int num2)
{
	return (num1 * num2);
}

/**
 * isNumber - Checks if the argument passed is a number
 * @ptr: Number passed
 *
 * Return: 0 - Error
 */

int isNumber(char *ptr)
{
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (!isdigit(ptr[i]))
			return (0);
	}
	return (1);
}

/**
 * main - Takes two numbers as arguments
 * @argc: Number of cmd arguments
 * @argv: Array of cmd arguments
 *
 * Return: 0 - Success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *num1_str, *num2_str;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	num1_str = argv[1];
	num2_str = argv[2];

	if (!isNumber(num1_str) || !isNumber(num2_str))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(num1_str);
	num2 = atoi(num2_str);

	result = multiply(num1, num2);
	printf("%d\n", result);

	return (0);
}
