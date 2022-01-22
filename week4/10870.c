#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	int fibo[21] = { 0, 1 };
	scanf("%d", &n);

	for (int i = 2; i <= n; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	printf("%d", fibo[n]);

	return 0;
}