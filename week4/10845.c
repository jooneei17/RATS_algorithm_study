#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main() {
	int n, input_n;
	int front=-1, back=-1;
	int arr[100001] = { 0 };
	char input_s[6];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", input_s);
		if (strcmp(input_s, "push") == 0) {
			scanf("%d", &input_n);
			arr[++back] = input_n;
		}
		else if (strcmp(input_s, "front") == 0) {
			if (back == front)
				printf("-1\n");
			else {
				printf("%d\n", arr[++front]);
				front--;
			}
		}
		else if (strcmp(input_s, "back") == 0) {
			if (back == front)
				printf("-1\n");
			else
				printf("%d\n", arr[back]);
		}
		else if (strcmp(input_s, "size") == 0) {
			printf("%d\n", (back+1)-(front+1));
		}
		else if (strcmp(input_s, "empty") == 0) {
			if (back == front) printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(input_s, "pop") == 0) {
			if (back == front) {
				printf("-1\n");
			}
			else {
				printf("%d\n", arr[++front]);
				
			}
		}
	}
	return 0;
}