int check_sqrt(int n, int root);

/**
 * _sqrt_recursion - Finds the square root of a number
 *
 * @n: Number whose root is to be determined
 *
 * Return: The square root or -1 if there is no natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (check_sqrt(n, 0));
}

/**
 * check_sqrt - checks the square root of a number
 *
 * @n: number to test for its square root
 * @root: The test number
 *
 * Return: The square root
 */
int check_sqrt(int n, int root)
{
	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);
	else
		return (check_sqrt(n, root + 1));
}
