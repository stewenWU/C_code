#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int gcd(int a, int b)
{
	int temp;
	do
	{
		temp = b % a;
		b = a;
		a = temp;
	} while (temp != 0);
	return b;
}
void main()
{
	int i, j, cnt = 0;
	for (i = 1; i <= 2020; i++)
	{
		for (j = 1; j <= 2020; j++)
		{
			if (gcd(i, j) == 1)
				cnt++;
		}
	}
	printf("%d", cnt);
}