
/**
* sqr - check for prime numbers
*
* @n: number to check
* @x: count
* Return: int
**/

int sqr(int n, int x)
{

if (x * x == n)
return (x);

if ((x > (n / 2)) && (x * x != n))
return (-1);

else
return (sqr(n, (x + 1)));
}

/**
* _sqrt_recursion- find square root
*
* @n: number to check
*
* Return: int
**/

int _sqrt_recursion(int n)
{
return (sqr(n, 1));
}
