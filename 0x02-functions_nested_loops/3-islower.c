#include "main.h"

/**
* _islower - entry poiny
*
* Description: "check for lowercase letters"
*
* Return: "success = 0"
**/

int _islower(int c)
{
int r;
r = islower(c);
if (r == 0)
{
	return (0);
else
{
	return (1);
}

}
