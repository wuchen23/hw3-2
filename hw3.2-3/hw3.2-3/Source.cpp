#include<stdio.h>
#include<stdlib.h>

int power(int base, int ex);

int main()
{
	int b, e;
	printf("Enter the base and exponent:");
	scanf_s("%d%d", &b, &e);
	printf("power(%d,%d)=%d",b,e,power(b,e));
}
int power(int base, int ex)
{
	if (ex == 1)
	{
		return base;
	}
	else
	{
		return base*power(base,ex - 1);
	}
}