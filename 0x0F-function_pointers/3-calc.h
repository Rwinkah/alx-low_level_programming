#ifndef _MAINN_
#define _MAINN_




/**
* struct op - structure for operator handling
* @op: operator symbol
* @f: operator function
*
**/
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int (*get_op_func(char *s))(int, int);
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_mod(int a, int b);
int op_div(int a, int b);
#endif
