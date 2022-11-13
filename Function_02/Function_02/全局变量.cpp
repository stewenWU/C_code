#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
float Max = 0, Min = 0;
float average(float arry[], int n);
void main()
{
	float score[10],avg;
	for (int i = 0; i < 10; i++)
	{
		scanf("%f", &score[i]);
	}
	avg = average(score, 10);
	printf("The Max is %.2f\nThe Min is %.2f\nThe average is %.2f", Max, Min, avg);
}
float average(float arry[], int n)
{
	Max = Min = arry[0];
	float sum = 0, avg = 0;
	for (int i = 1; i < n; i++) {
		if (arry[i] > Max) {
			Max = arry[i];
		}
		else if (arry[i] < Min)
		{
			Min = arry[i];
		}
		sum += arry[i];
	}
	avg = (sum+arry[0]) / n;
	return avg;
}