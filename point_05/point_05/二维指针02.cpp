#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	int a[3][4] = { 3,7,9,11,24,30,23,77,15,69,78,99 };
	int(*p)[4], i, j;
	p = a;
	printf("i= ");
	scanf("%d", &i);
	while (i < 0 || i>2)
	{
		printf("i= ");
		scanf("%d", &i);
	}
	printf("j= ");
	scanf("%d", &j);
	while (j < 0 || j>3)
	{
		printf("j= ");
		scanf("%d", &j);
	}
	printf("a[%d %d]=%d", i, j,*( * (p + i) + j));

}