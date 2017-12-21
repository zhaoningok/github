#include <stdio.h>
int main (void)
{
	int a,b;
	a = 10; b = 26;
/*	a = a ^ b;
	b = a ^ b;
	a = a ^ b;*/
	a = a + b;
	b = a - b;
	a = a - b;
	a = a | (1u << 2);
	b = b & ~(1u << 1);
	printf("a:%d,b:%d\n",a,b);
	return 0;
}
