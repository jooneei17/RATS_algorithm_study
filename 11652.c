// 정답 코드


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

long long data[1000001];
long long copy[1000001];

void merge(int start, int end) {
	int mid = (start + end) / 2;
	int i = start;
	int j = mid + 1;
	int k = start;

	while (i <= mid && j <= end) { 
		if (data[i] <= data[j]) {
			copy[k++] = data[i++]; 
		}
		else {  
			copy[k++] = data[j++];
		}
	}

	if (i <= mid) { 
		while (i <= mid) {
			copy[k++] = data[i++];
		}
	}
	else { 
		while (j <= end) {
			copy[k++] = data[j++];
		}
	}

	for (int n = start; n <= end; n++) {
		data[n] = copy[n];
	}
}

void merge_sort(int start, int end) {
	if (start < end) {
		int mid = (start + end) / 2;
		merge_sort(start, mid); 
		merge_sort(mid + 1, end); 
		merge(start, end);
	}
}

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%lld", &data[i]);
	}
	
	int cnt = 1;
	int max = 1;

	merge_sort(0, n - 1);
	
	long long value = data[0];


	for (int i = 1; i < n; i++) {
		if (data[i] == data[i - 1]) {
			cnt++;
		}
		else {
			cnt = 1;
		}
		if (max < cnt) {
			max = cnt;
			value = data[i];
		}
	}

	printf("%lld", value);
	return 0;
}







//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//void mergeSort(int data[], int p, int r);
//void merge(int data[], int p, int q, int r);
//
//long long data[1000001];
//long long copy[1000001];
//
//int main() {
//	int n;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		scanf("%lld", &data[i]);
//	}
//	
//	int count = 1;
//	int max = 1;
//
//	mergeSort(data, 0, n);
//
//	long long index = data[0];
//
//
//	for (int i = 1; i < n; i++) {
//		if (data[i] == data[i - 1]) {
//			count++;
//		}
//		else
//			count = 1;
//		if (max < count) {
//			max = count;
//			index = data[i];
//			
//		}
//	}
//	printf("%lld", index);
//		
//	return 0;
//}
//
//void mergeSort(int data[], int p, int r) {
//	int q;
//
//	if (p < r) {
//		q = (p + r) / 2;
//		mergeSort(data, p, q);
//		mergeSort(data, q + 1, r);
//		merge(data, p, q, r);
//	}
//}
//
//void merge(int data[], int p, int q, int r) {
//	int i = p, j = q, k = p;
//
//	int tmp[sizeof(data)] = { 0 };
//	
//	while (i <= q && j <= r) {
//		if (data[i] <= data[j]) tmp[k++] = data[i];
//		else tmp[k++] = data[j];
//	}
//	while (i <= q) tmp[k++] = data[i];
//	while (j <= r) tmp[k++] = data[j];
//	for (int a = p; a <= r; a++) data[a] = tmp[a];
//}