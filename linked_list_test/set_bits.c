#include<stdio.h>

int main(void)
{
	int a = 1;
	printf("The integer is %d\n\n", a);
	int num_set_bits = 0;
	while(a)
	{
		a &= (a - 1);
		num_set_bits++;
	}
	printf("below are the set bits of %d\n",a);
	printf("%d\n", num_set_bits);
	return 0;
}
