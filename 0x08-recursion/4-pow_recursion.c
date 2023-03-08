/**
 * _pow_recursion - a function that returns the power of @x by @y x^y
 *
 * Description: This function uses a recursive approach to compute the power
 * of @x raised to @y. It uses a divide-and-conquer approach to optimize the
 * computation, as explained in this YouTube video:
 *
 * @x: integer base
 * @y: integer exponent
 *
 * Return: the result of @x raised to @y
*/
int _pow_recursion(int x, int y)
{
	int even;

	if (y < 0)		/*if y is a negative number, return -1*/
		return (-1);
	else if (y == 0)	/*x to the power of 0 is 1*/
		return (1);
	else if (y % 2 == 0)	/*if y is an even number*/
	{
		even = _pow_recursion(x, y / 2);
		return (even * even);
	}
	else			/*if y is odd*/
		return (x * _pow_recursion(x, y - 1));
}
