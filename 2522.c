#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 100) {
		for (int i = 1; i <= n; i++) {
			for (int j = n; j > i; j--) {
				printf(" ");
			}
			for (int k = 0; k < i; k++) {
				printf("*");
			}
			printf("\n");
		}
		for (int i = 1; i < n;i++) {
			for (int j = 0; j < i; j++) {
				printf(" ");
			}
			for (int k = n - 1; k >= i;k--) {
				printf("*");
			}
			printf("\n");
		}

	}
}