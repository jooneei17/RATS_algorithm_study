#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int open=0, close=0;
	char arr[51];
	scanf("%d", &n);


	for (int i = 0; i < n; i++) {
		open = 0, close = 0;
		scanf("%s", arr);

		for (int k = 0; k < strlen(arr); k++) {
			if (arr[k] == '(') {
				open++;
			}
			else if (arr[k] == ')')
				close++;
			if (open < close) break;
		}
		
		if (open != close)
			printf("NO\n");
		else
			printf("YES\n");
	}

	return 0;
}