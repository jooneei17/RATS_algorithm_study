#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int n;
	int last = -1;
	int arr[10001] = { 0 };
	char input_s[6];
	int input_n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {

		scanf("%s", &input_s);

		if(strcmp(input_s, "push") ==0) {
			scanf("%d", &input_n);
			arr[++last] = input_n;
			
		}
		else if (strcmp(input_s,"pop")==0) {
			if (last == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[last--]);
			
			// 배열에서 마지막 인덱스 빼기...

		}
		else if (strcmp(input_s, "size")==0) {
			printf("%d\n", last+1);
		}
		else if (strcmp(input_s, "empty")==0) {
			if (last==-1) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(input_s, "top") == 0) {
			if (last == -1)
				printf("-1\n");
			else
				printf("%d\n", arr[last]);
		}
		

	}

	return 0;
}