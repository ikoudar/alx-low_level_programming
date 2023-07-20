#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *op_add- function that print sum f a & b.
  *@a: first arg
  *@b: second arg
  *Return: sum
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
  *op_sub- function that print sub of a & b.
  *@a: first arg
  *@b: second arg
  *Return: sum
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul- function that print mul of a & b.
 *@a: first arg
 *@b: second arg
 *Return: sum
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div- function that print div of a & b.
 *@a: first arg
 *@b: second arg
 *Return: sum
*/

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error \n");
		exit(100);
	}

	return (a / b);
}

/**
 *op_mod- function that print mod of a & b.
 *@a: first arg
 *@b: second arg
 *Return: sum
*/

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
