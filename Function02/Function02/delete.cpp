#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void string_delete(char str[],char ch) {
	int i, j;
	for ( i= j = 1; str[i]!='\0'; i++) {
		if (str[i] != ch) {
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}