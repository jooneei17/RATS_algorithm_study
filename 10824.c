#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char arr[101];
	
	int a, b, c, d;
	scanf("%d %d %d %d", &a, &b, &c, &d);

	int A, B;

	sprintf(arr, "%d%d %d%d", a, b, c, d); //sprintf�� ��ġ->���ڿ�
	sscanf(arr, "%d %d", &A, &B);//sscanf�� ���ڿ�->��ġ

	printf("%d\n", A + B);

	return 0;
}