#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 100) {
		for (int i = 0; i < n; i++) {
			for (int k = 0; k < i; k++) {
				printf(" ");
			}
			for (int j = (2 * n - 1) - i * 2; j > 0; j--) {
				printf("*");
			}
			printf("\n");
		}
		for (int i = 0; i < n - 1; i++) {
			for (int j = n - 2 - i; j > 0; j--) {
				printf(" ");
			}
			for (int k = 0; k < 2 * i + 3; k++) {
				printf("*");
			}
			printf("\n");

		}

	}
}
