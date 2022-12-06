#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
    long long i, j, n;
    for (i = 1; i <= 1000000007; i++)
    {
        j = i * 2021;
        n = j % 1000000007;
        if (n == 999999999) {
            printf("%lld", i);
            break;
        }
    }
}