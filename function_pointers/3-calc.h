#ifndef _HEADER_
#define _HEADER_

/**
 * struct op - Entry point of the program
 *
 * @op: program that performs simple operations
 * @f: program that performs simple operations
 *
 * Return: Always 0 (Success)
 */
typedef struct op
{
char *op;
int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif
