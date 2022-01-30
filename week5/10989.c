#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	int n, input;
	int arr[10001] = { 0, };
	
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &input);
		arr[input]++;
	}
	for (int i = 0; i < 10001; i++) {
		if (arr[i] > 0) {
			for (int j = 0; j < arr[i]; j++) {
				printf("%d\n", i);
			}
		}
	}
	
	return 0;
}