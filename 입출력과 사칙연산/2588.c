#include <stdio.h>
int main() {
	int a;
	int b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	printf("%d\n", a * (b % 10));
	printf("%d\n", a * ((b % 100) / 10));
	printf("%d\n", a * (b / 100));
	printf("%d\n", a * b);
	return 0;
}