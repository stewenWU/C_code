#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int a[20190324];
void main()
{
	int i;
	a[0] = a[1] = a[2] = 1;
	for (i = 3; i < 20190324; i++)
	{
		a[i] = (a[i - 1] + a[i - 2] + a[i - 3]) % 10000;
	}
		printf("%d", a[20190323]);
	
}