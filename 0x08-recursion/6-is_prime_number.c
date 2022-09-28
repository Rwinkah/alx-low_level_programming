
/**
* is_prime_number - check for prime numbers
*  
* @n: number to check 
* 
* Return: 1 if prime 0 if not prime
**/


int is_prime_number(int n)
{

if ((n % n == 0) && (n % (n + 1) != 0))
return (1);

else 
return (0);
}
