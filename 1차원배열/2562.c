#include <stdio.h>
int main() {
	int max = 0;
	int a;
	int try;
	for (int i = 0; i < 9;i++) {
		scanf("%d", &a);
		if (max < a) {
			max = a;
			try = i + 1;
		}
	}
	printf("%d\n%d", max, try);
}