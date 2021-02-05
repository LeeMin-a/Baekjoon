#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	if (a > b) {
		printf(">");
	}
	else if (a == b) {
		printf("==");
	}
	else {
		printf("<");
	}
	return 0;
}