#include "3-calc.h"
/**
 * op_add - function that add two number
 * @a: first number
 * @b: second number
 * Return: return the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function that subtraction of two numbers
 * @a: first number
 * @b: second number
 * Return: return the difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function that mulplication of two numbers
 * @a: first number
 * @b: second number
 * Return: return the product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function that division of two numbers
 * @a: first number
 * @b: second number
 * Return: return the result of division of  two numbers
 */
int op_div(int a, int b)
{
	return (b != 0 ? a / b : 0);
}
/**
 * op_mod - function that moduler of two numbers
 * @a: first number
 * @b: second number
 * Return: return the remainder of the division of two numbers
 */
int op_mod(int a, int b)
{
	return (b != 0 ? a % b : 0);
}
