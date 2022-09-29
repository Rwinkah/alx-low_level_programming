
/**
* prm - check for prime numbers
*
* @n: number to check
* @x: count
* Return: 1 if prime 0 if not prime
**/

int prm(int n, int x)
{
if ((n == 3) || (n == 2))
return (1);

if (n <= 1)
return (0);

if (((n % x) == 0) && (x != 1))
return (0);

if ((x > (n / 2)))
return (1);

else
return (prm(n, x + 1));
}

/**
* is_prime_number - check for prime numbers
*
* @n: number to check
*
* Return: 1 if prime 0 if not prime
**/

int is_prime_number(int n)
{
return (prm(n, 1));
}
