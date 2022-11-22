#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main()
{
	void copystring(char* from, char* to);
	char a[] = "I love you";
	char b[] = "You love me";
	printf("\na=%s\nb=%s", a, b);
	copystring(a, b);
	printf("\n%s\n%s", a, b);
}
void copystring(char* from, char* to)
{
	for (; *from != '\0'; from++, to++)
	{
		*to = *from;
	}
    /*
	while((*to++=*from++)!='\0')
	{
	;
	}
	*/
	/*
	while(*from!='\0')
	{
	    * to++=* from++;
		* *to = '\0';
	}
	*/
	*to = '\0';
}