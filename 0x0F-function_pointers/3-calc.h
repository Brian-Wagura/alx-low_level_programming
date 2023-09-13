/**
 * struct op - Struct op
 * @op: Operator
 * @f: function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;
