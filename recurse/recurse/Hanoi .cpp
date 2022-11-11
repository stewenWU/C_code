#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void main() {
	void Hanoi(int n, char a, char b, char c);
	void move(char x, char y);
	int m;
	scanf("%d", &m);
	Hanoi(m, 'A', 'B','C');

}
void Hanoi(int n, char a, char b, char c) {
	void move(char x,char y);
	if (n == 1) {
		move(a, c);
	}
	else {
		 Hanoi(n - 1, a, c, b);
		 move(a, c);
		 Hanoi(n - 1, b, a, c);
	}
}
void move(char x, char y) {
	printf("%c-->%c\n", x, y);
}