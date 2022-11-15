#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	extern void string_put(char str[]);
	extern void string_delete(char str[], char ch);
	extern void string_print(char str[]);
	char str[80];
	char c;
	string_put(str);
	scanf("%c", &c);
	string_delete( str,c);
	string_print(str);
}