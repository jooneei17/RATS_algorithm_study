#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//최소공배수 구하기

int GCD(int a, int b);
int LCM(int a, int b);

int main() {
	int t;
	int a, b;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", LCM(a, b));
	}


	return 0;
}

int LCM(int a, int b) {
	return a * b / GCD(a, b);
}

int GCD(int a, int b) {
	if (b == 0)
		return a;
	else
		return GCD(b, a % b);
}

