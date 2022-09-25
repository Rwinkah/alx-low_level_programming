#include "main.h"

/**
* reverse_array - reverse n number of elements in an array
*
*@a:pointer to array of integers
*
*@n: number of elements in the array
*
*Return: void
**/

void reverse_array(int *a, int n)
{
int rev[100], i, j;
int k = n - 1;
int l = (sizeof(a) / sizeof(int));

for (i = 0; i <= k; i++)
{
rev[i] = a[k - i];
}

for (j = 0; j < n; j++)
{
a[j] = rev[j];
}


}

