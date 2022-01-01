#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	if (n >= 1 && n <= 100) {
		for (int i = 0; i < n - 1; i++) {
			for (int k = n - 1 - i; k >= 1; k--) {
				printf(" ");
			}
			for (int j = 0; j <= i; j++) {
				if (j == 0 || j == i)
					printf("* ");
				else printf("  ");
			}
			printf("\n");
		}

		for (int z = 0; z < 2 * n - 1; z++)
			printf("*");
	}
}
