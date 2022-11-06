#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int a[10], i,max;
	printf("input 10 numbers");
	for (i = 0; i < 10; i++) {
		scanf("%d", &a[i]);	
	}
	max = a[0];
	for (i = 0; i < 10; i++) {
		if (a[i] > max)
			max = a[i];
	}
	printf("max=%d", max);
	return 0;
}