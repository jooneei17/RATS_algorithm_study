#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int count = 0;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 5 == 0) count++;
		if (i % 25 == 0) count++;
		if (i % 125 == 0) count++;
	}
	printf("%d\n", count);
	return 0;
}