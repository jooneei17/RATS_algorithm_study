#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define SIZE 10001

int main() {
	int n, input_n, size=0;
	int back=-1, front=-1;
	char input_s[6], arr[SIZE];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", input_s);
		if (strcmp(input_s, "push_back")==0) {
			scanf("%d", &input_n);
			arr[SIZE-back -1] = input_n;
			back--; size++;
		}
		else if (strcmp(input_s, "push_front") == 0) {
			scanf("%d", &input_n);
			arr[++front] = input_n;
			size++;
		}
		else if (strcmp(input_s, "front") == 0) {
			if (front == -1) {
				printf("-1\n");
			}
			else printf("%d\n", arr[front]);
		}
		else if (strcmp(input_s, "back") == 0) {
			if (back == -1)
				printf("-1\n");
			else printf("%d\n", arr[SIZE + ++back]);
		}
		else if (strcmp(input_s, "size") == 0) {
			printf("%d\n", size);
		}
		else if (strcmp(input_s, "empty") == 0) {
			if (front == -1 && back == -1)
				printf("1\n");
			else printf("0\n");
		}
		else if (strcmp(input_s, "pop_front") == 0) {
			if (front == -1 && back == -1) {
				printf("-1\n");
			}
			else {
				printf("%d\n", arr[front--]);
			}
		}
		else if (strcmp(input_s, "pop_back") == 0) {
			if (front == -1 && back == -1) {
				printf("-1\n");
			}
			else {
				printf("%d\n", arr[SIZE + back]);
			}
		}
	}

	return 0;
}