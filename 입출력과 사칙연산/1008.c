#include <stdio.h>
int main() {
	int a;
	int b;
	scanf_s("%d %d", &a, &b);
	printf("%.10g", (double)a / (double)b);
	return 0;
}