#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - addition
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - sub
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - mul
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - div
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - mod
 * @a: int
 * @b: int
 *
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
