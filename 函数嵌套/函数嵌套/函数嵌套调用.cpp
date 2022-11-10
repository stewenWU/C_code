#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
long square(int a);
long factorial(int b);
int main() {
	long s=0;
	for (int i = 2; i <= 3; i++) {
		 s = s + square(i);
	}
	printf("%ld\n",s);
	return 0;
}
long square(int a) {
	long k;
	int z;
	long factorial(int);
	z = a * a;
	k=factorial(z);
	return k;
}
long factorial(int b)
{
	long m=1;
	for (int k = b; k >= 1; k--) {
		m *= k;
	}
	return m;
}