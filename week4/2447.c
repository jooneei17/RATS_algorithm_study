#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 알고리즘 어렵다..

void star(int i, int j, int n);
int main() {
	int n;
	scanf("%d", &n);

	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			star(i, j, n);
		}
		printf("\n");
	}
	

	return 0;
}

void star(int i, int j, int n) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
		printf(" ");
	else {
		if (n / 3 == 0)
			printf("*");
		else star(i, j, n / 3);
	}
}