#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 100) {
		for (int i = n; i > 0; i--) {
			for (int j = n; j >= i; j--) {
				printf("*");
			}
			for (int k = 2 * i - 2; k > 0; k--) {
				printf(" ");
			}
			for (int j = n; j >= i; j--) {
				printf("*");
			}
			printf("\n");

		}

		for (int i = n - 1;i > 0; i--) {
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			for (int k = 2 * n - 2; k > 2 * i - 2; k--) {
				printf(" ");
			}
			for (int j = 0; j < i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
}
