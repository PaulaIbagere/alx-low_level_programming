#include "3-calc.h"
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - function to add two numbers
 * @a: num1
 * @b: num2
 * Return: a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - function to subtract two numbers
 * @a: num1
 * @b: num2
 * Return: a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - function to subtract two numbers
 * @a: num1
 * @b: num2
 * Return: a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - function to subtract two numbers
 * @a: num1
 * @b: num2
 * Return: a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - function to subtract two numbers
 * @a: num1
 * @b: num2
 * Return: a/b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
