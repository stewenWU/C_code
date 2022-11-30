#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    long a[200][200];
	int i, j, n, t=0;
	a[0][0] = 1;
	a[1][0] = a[1][1] = 1;
	for (i = 2; i < 200; i++)
	{
		a[i][i] = a[i][0] = 1;
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
		}

	}
	scanf("%d", &n);
	for (i = 0; i < 200; i++)
	{
		for (j = 0; j <= i; j++)
		{

			if (n == a[i][j])
			{
				t = 1;
				printf("%d", (i + 1) * i / 2 + j + 1);
				break;
			}
		}
		if (t == 1)
			break;
	}
	return 0;
	
}