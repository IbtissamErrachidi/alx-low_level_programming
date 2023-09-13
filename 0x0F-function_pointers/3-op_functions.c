#include "3-calc.h"
#include <stdio.h>
/**
* op_add - addition function
* @a: int type
* @b: int type
* Return: result of sum of two ints
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - substraction function
* @a: int type
* @b: int type
* Return: result of substraction of two ints
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplication function
* @a: int type
* @b: int type
* Return: product of two ints
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - division of two ints
* @a: int type
* @b: int type
* Return: result of division of two ints
*/

int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - modulos of two ints
* @a: int type
* @b: int type
* Return: remainder of division of two ints.
*/

int op_mod(int a, int b)
{
	return (a % b);
}
