#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <algorithm>


//알고리즘을 이용한 부분...
int s;

void binary(int n, int i);
int main() {
	char input[333444];
	scanf("%s", &input);
	int length = strlen(input);

	if (input[0] == 48) printf("0");
	else {
		for (int i = 0; i < length; i++) {
			binary(input[i] - 48, i);
		}
	}


	return 0;
}

void binary(int n, int i) {
	if (i == 0 && n <= 3) {
		s = 1;
		if (n == 1) s = 0;
	}
	else s = 2;
	for (int i = s; i >= 0; i--) {
		if (n >= pow(2, i)) {
			printf("1");
			n -= int(pow(2, i));
		}
		else printf("0");
	}
}





