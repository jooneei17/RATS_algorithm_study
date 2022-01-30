#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


void sort(int arr[], int len);

int arr[1000001] = { 0 };

int main() {
	int n;
	
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	
	sort(arr, n);
	for (int i = 0; i < n; i++) {
		printf("%d\n", arr[i]);
	}
	
	return 0;
}

void sort(int arr[], int len) {
	// 길이가 1이면 return
	if (len == 1) {
		return;
	}
	// arr를 left, right로 나눈다
	int* left;
	left = (int*)malloc(sizeof(int) * len / 2);
	for (int i = 0; i < len / 2; i++) {
		left[i] = arr[i];
	}

	int* right;
	right = (int*)malloc(sizeof(int) * (len - (len / 2)));
	for (int i=0; i < (len - (len / 2)); i++) {
		right[i] = arr[i+(len/2)];
	}
	// left right 각각 sort
	sort(left, len/2);
	sort(right, (len - (len / 2)));

	// left right를 순서에 맞게 합치기
	
	int i=0, j=0;

	for (int k = 0; k < len; k++) {
		if (i < len / 2 && j< (len - (len / 2))) {
			if (left[i] < right[j]) {
				arr[k] = left[i];
				i++;
			}
			else {
				arr[k] = right[j];
				j++;
			}
		}
		else if (i >= len / 2) {
			arr[k] = right[j];
			j++;
		}
		else if (j >= (len - (len / 2))) {
			arr[k] = left[i];
			i++;
		}
	}

	free(left);
	free(right);


}