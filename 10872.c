#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, result=1;
	scanf("%d", &n);

	for (int i = 1; i <= n;i++) {
		result *= i;
	}
	printf("%d", result);

	return 0;
}