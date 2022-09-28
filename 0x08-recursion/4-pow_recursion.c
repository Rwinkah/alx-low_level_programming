
/**
* _pow_recursion - rescursively solve exponentation
*
* @n: number
* @y: exponent
*
* Return: int
**/

int _pow_recursion(int n, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (n * _pow_recursion(n, y - 1));
}



