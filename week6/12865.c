#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int arr[101][2];
int dp[101][100001] = { 0, };

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {
	int n, k;

	scanf("%d %d", &n, &k);


	for (int i = 1; i <= n; i++) {
		scanf("%d %d", &arr[i][0], &arr[i][1]);
	}

	for (int i = 1; i <= n; i++) {
		for (int j = k; j >= 0; j--) {
			if (j - arr[i][0] >= 0) {
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - arr[i][0]] + arr[i][1]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
			}
		}
	}

	printf("%d", dp[n][k]);

	return 0;
}