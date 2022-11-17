#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	void swap(int* p1, int* p2);
	int a, b;
	int* point_1, * point_2;
	scanf("%d%d", &a, &b);
	point_1 = &a;
	point_2 = &b;
	if (b > a)
	{
		swap(point_1, point_2);
	}
	printf("%d %d", a, b);
}
void swap(int* p1, int* p2)
{
	int temp;
	printf("i am swaping\n");
	printf("please waiting\n");
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}