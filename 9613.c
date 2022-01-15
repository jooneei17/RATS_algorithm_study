#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main() {
	int arr[100];
	int t_size, in_size;
	long long int sum = 0;

	scanf("%d", &t_size);

	while (t_size--) {
		scanf("%d", &in_size);

		for (int n = 0; n < in_size; n++) {
			scanf("%d", &arr[n]);
		}

		for (int n = 0; n < in_size - 1; n++) {
			for (int k = n + 1; k < in_size; k++)
				sum += gcd(arr[n], arr[k]);
		}
		
		printf("%lld\n", sum);

		sum = 0;
	}
	return 0;
}

int gcd(int a, int b) {
	if (b == 0) return a;
	else return gcd(b, a % b);
}