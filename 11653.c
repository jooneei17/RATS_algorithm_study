#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//소인수분해
int main() {
	int n;
	scanf("%d", &n);

	for (int i = 2; i*i <= n; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
			n /= i;
			--i;
		}
	}
	
	if (n > 1)
		printf("%d\n", n);

	return 0;
}