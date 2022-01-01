#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[101];
	
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int A, B;

	sprintf(arr, "%d%d %d%d", a, b, c, d); //sprintf는 수치->문자열
	sscanf(arr, "%d %d", &A, &B);//sscanf는 문자열->수치

	printf("%d\n", A + B);

	return 0;
}
