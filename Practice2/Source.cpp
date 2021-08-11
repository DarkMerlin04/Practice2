#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a[3];
	printf("Enter two numbers : ");
	scanf("%d %d", &a[0], &a[1]);
	a[2] = a[0] + a[1];
	printf("Sum : ");
	printf("%d\n", a[2]);
	a[2] = a[0] - a[1];
	printf("Difference : ");
	printf("%d\n", a[2]);
	a[2] = a[0] * a[1];
	printf("Product : ");
	printf("%d\n", a[2]);
	a[2] = a[0] / a[1];
	printf("Quotient : ");
	printf("%d", a[2]);
	return 0;
}
