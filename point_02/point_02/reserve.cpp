#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	void reserve(int* p, int n);
	int a[10] = { 3,7,4,9,2,5,1,6,0,8 };
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	putchar('\n');
	reserve(a, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
}
void reserve(int* p, int n)
{
	int* i, * q, * j, temp, m;
	m = (n - 1) / 2;
	i = p;
	q = p + n - 1;
	j = p + m;
	for (; i <= j; i++, q--)
	{
		temp = *i;
		*i = *q;
		*q = temp;
	}
}