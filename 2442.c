#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 100) {
		for (int i = 0; i < n; i++) {
			for (int j = n - 1; j > i; j--)
				printf(" ");
			for (int k = 0; k < 2 * i + 1; k++)
				printf("*");
			printf("\n");
		}
	}
}