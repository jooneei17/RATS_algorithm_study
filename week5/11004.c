#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b);

int main() {
	int n, k;

	scanf("%d %d", &n, &k);
	
	int* arr;
	arr = (int*)malloc(sizeof(int) * n);
		
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), cmp);

	printf("%d", arr[k-1]);

	return 0;
}

int cmp(const void* a, const void* b) {
	
	if (*(int*)a > *(int*)b) {
		return 1;
	}
	else if 
		(*(int*)a > *(int*)b) return 0;
	else
		return -1;

}
