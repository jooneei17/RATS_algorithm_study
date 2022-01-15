#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int N;

void bi(int N);
int main() {
	scanf("%d", &N);
	if (N == 0) {
		printf("0");
		return 0;
	}
	bi(N);
	return 0;
}

void bi(int N) {
	if (N == 0) return;
	if (N % -2 == 0) {
		bi(N / -2);
		printf("0");
	}
	else {
		bi((N - 1) / -2);
		printf("1");
	}
	return;
}