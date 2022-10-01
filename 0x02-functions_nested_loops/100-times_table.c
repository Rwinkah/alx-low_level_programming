#include "main.h"

/**
* print_times_table - function using putchar to print
*
*@i: param
*@n: param
* Description: "print times table"
*
* Return: no return
*
**/
void hndl2(int, int,int, int);
void hndle3(int,int,int, int);
int condtn(int , int);
void table(int i, int n);
void print_times_table(int n)
{
int i;
for (i = 0; i <= n; i++)
{
condtn(i, n);

_putchar(10);
}
}


/**
* table - function split because betty is petty
*
* @i:  counter 2
*
* Description: "print times table"
*
* Return: no return
*
**/

void table(int i, int n)
{
    int k;
    for (k=0; k <= n; k++){
      int  d = k * n;
      int  e = (k + 1) * n;
      if (d < 100 && d > 9){
        hndl2(d, e,n,k);
      }
      if (d > 99){
        hndle3(d, e,n,k);
      }
      else{
        if (n * (k+1) < 10)
        {
        _putchar('0' + (d % 10));
        _putchar(44);
        _putchar(32);
        _putchar(32);
        _putchar(32);
        }
        else {
            _putchar(d % 10);
            _putchar(44);
            _putchar(32);
            _putchar(32);
        }
      }

    }
      k++;
}


/**
* condtn - "Less than 15 and greater than 0"
*
* @l: input parameter
*
* Description: "check for condition"
*
* Return: "value"
**/

int condtn(int i, int n)
{
    if (n >0 && n <= 15){
        table(i,n);
    }
    else
    {
        return (0);
    }
}


void hndl2(int d, int e, int n, int k){
    _putchar('0' + d);
    _putchar('0' + e);
    _putchar('0' + n);
    _putchar('0' + k);
    // _putchar('0'+k);
    // _putchar('0'+n);
    // if ((k + 1) > n){
    //     _putchar('0' + (d / 10));
    //     _putchar('0' +(d % 10));
    // }
    // else{

    
    // if (e < 100){
    //     _putchar('0' +(d / 10));
    //     _putchar('0' + (d % 10));
    //     _putchar(44);
    //     _putchar(32);
    //     _putchar(32);
    // }

    // else{
    //     _putchar('0' + (d / 10));
    //     _putchar('0' + (d % 10));
    //     _putchar(44);
    //     _putchar(32);
    // }
    // }
}



void hndle3(int d, int e, int  n, int k){
    if ((k + 1) > n){
        _putchar('0' + (d / 100));
        _putchar('0' + ((d / 10) % 10));
        _putchar('0' + (d % 10));
    }
    else{
        _putchar('0' + (d/ 100));
        _putchar('0' +((d / 10) % 10));
        _putchar('0' + (d % 10));
        _putchar(44);
        _putchar(32);
    }
    
    
}