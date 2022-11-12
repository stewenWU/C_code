#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
double average(double b[10]);
void main()
{
	double score[10];
	double result;
	printf("put youy score:"); 
	putchar('\n');
	for (int i = 0; i < 10; i++)
	{
		scanf("%lf", &score[i]);
	}
	result=average(score);
	printf("%lf", result);
}
double average(double b[10]) {
	double count = 0;
	for (int i = 0; i < 10; i++)
	{
		count+=b[i];
	}
	count/=10;
	return count;
}