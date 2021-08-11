#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[2], c;
	printf("Enter two numbers : ");
	scanf("%d %d", &a[0], &a[1]);
	c = a[0] + a[1];
	printf("Sum : ");
	printf("%d\n", c);
	c = a[0] - a[1];
	printf("Difference : ");
	printf("%d\n", c);
	c = a[0] * a[1];
	printf("Product : ");
	printf("%d\n", c);
	c = a[0] / a[1];
	printf("Quotient : ");
	printf("%d", c);
	return 0;
}