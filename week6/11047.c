#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n, k;
	scanf("%d %d", &n, &k);

	int* arr;
	arr = (int*)malloc(sizeof(int) * n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	int j, count = 0;
	j = n - 1;
	while (k > 0) {
		if (k < arr[j]) {
			j--;
		}
		else {
			k -= arr[j];
			count++;
		}
	}

	printf("%d", count);

	return 0;
}