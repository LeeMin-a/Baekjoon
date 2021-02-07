#include <stdio.h>
int main() {
	int n;
	int i = 1;
	scanf("%d", &n);
	int a = n / 10;
	int b = n % 10;
	int c = (a + b) % 10;
	int d = b * 10 + c;
	while (n != d) {
		a = d / 10;
		b = d % 10;
		c = (a + b) % 10;
		d = b * 10 + c;
		i = i + 1;
	}
	printf("%d", i);
}