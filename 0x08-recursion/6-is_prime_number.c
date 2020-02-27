#include "holberton.h"

int isprime(int num, int div);
/**
 * is_prime_number - a function to call a prime checking function
 *
 * @n: our number in question, is it a prime?
 *
 * Return: 1 if prime, 0 if not prime.
 */

int is_prime_number(int n)
{
	int prime;

	if (n > 2)
		prime = isprime(n, 3);
	else if (n == 2)
		prime = 1;
	else
		prime = 0;

	return (prime);
}

/**
 * isprime - a function to test if a number is prime or not
 *
 * @num: the number we are checking if it is prime or not
 * @div: our divider we are using to check num
 *
 * Return: 0 if not a prime, 1 if prime.
 */

int isprime(int num, int div)
{
	if (div < num)
		if (num % div == 0)
			return (0);
		else
			return (isprime(num, (div + 1)));
	else
		return (1);

}
