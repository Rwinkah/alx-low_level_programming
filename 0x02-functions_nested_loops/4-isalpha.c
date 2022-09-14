#include "main.h"

/**
* _islower - entry poiny
*
* Description: "check for lowercase letters"
*
* @c: "The letter to check"
* Return: "success = 0"
**/

int _isalpha(int c)
{
if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
return (1);
else
return (0);
}
