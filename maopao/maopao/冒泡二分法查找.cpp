#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a[10];
	int i, j, t,n;
	int low=0, high=9, mid, found;
	for (i = 0; i < 10; i++)
	scanf("%d", &a[i]);
	for (j = 0; j < 9; j++) {
		for (i = 0; i < 9 - j; i++)
		{
			if (a[i] > a[i + 1]) {
				t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
		printf("put in number with you want:");
		scanf("%d", &n);
		while (low < high) {
			mid = (low + high) / 2;
			if (n == a[mid]) {
				found = 1;
				break;
			}
			else if (n < a[mid])
				high = mid - 1;
			else low = mid + 1;
		}
		if (found == 1) {
			printf("your number is %d\n", mid);
		}
		else
			printf("not found");
	return 0;
	
}