#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void sort(int *arr[], int len);

int main() {
	int n;
	scanf("%d", &n);
	
	//int arr[100001][2];
	int** arr;
	arr = (int**)malloc(sizeof(int*) * n);

	for (int i = 0; i < n; i++) {
		arr[i] = (int*)malloc(sizeof(int) * 2);
	}


	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	sort(arr, n);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i][0], arr[i][1]);
	}

	return 0;
}

void sort(int *arr[], int len) {
	if (len == 1)
		return;
	
	int** left;
	left = (int**)malloc(sizeof(int*) * (len / 2));
	for (int i = 0; i < len / 2; i++) {
		left[i] = arr[i];
	}

	int** right;
	right = (int**)malloc(sizeof(int*) * (len - (len / 2)));
	for (int i = 0; i < len - (len / 2); i++) {
		right[i] = arr[i+(len/2)];
	}

	sort(left, len / 2);
	sort(right, len - (len / 2));

	int i = 0, j = 0;
	for (int k = 0; k < len; k++) {
		if (i < len / 2 && j < len - (len / 2)) {//배열이 안 넘어갔으면
			if (left[i][0] < right[j][0]) {// left, right 비교
				arr[k] = left[i];
	 			i++;
			}
			else if(left[i][0]>right[j][0]) {
				arr[k] = right[j];
				j++;
			}
			else { //left[i] == right[i] 인 경우
				if (left[i][1] < right[j][1]) {
					arr[k] = left[i];
					i++;
				}
				else {
					arr[k] = right[j];
					j++;
				}
			}

		}
		else if (i >= len / 2) {
			arr[k] = right[j];
			j++;
		}
		else if (j >= len - (len / 2)) {
			arr[k] = left[i];
			i++;
		}
	}

	free(left);
	free(right);
}
