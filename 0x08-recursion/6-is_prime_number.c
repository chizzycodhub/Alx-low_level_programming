/**
 * prime_check - checks whether a number is prime or not
 *
 * @n: input number for prime check
 * @check: half of the number for prime check
 * @div: divisor
 *
 * Return: 1 for prime number or 0 if it is not.
 */
int prime_check(int n, int check, int div)
{
	if (n % div  == 0)
		return (0);
	else if (div >= check)
		return (1);
	else
		return (prime_check(n, check, div + 1));
}

/**
 * is_prime_number - checks if the input integer is a prime number
 *
 * @n: input integer for prime check
 *
 * Return: 1 if input integer is prime, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else
		return (prime_check(n, n / 2, 2));
}
