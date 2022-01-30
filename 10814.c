#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct person{
	int age;
	char name[101];
}member;

member p_arr[100001];

int main() {
	int n;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &p_arr[i].age, &p_arr[i].name);

	}
	for (int i = 1; i <=200; i++) {
		for (int j = 0; j < n;j++) {
			if (i==p_arr[j].age) {
				printf("%d %s\n", p_arr[j].age, p_arr[j].name);
			}
		}
	}


	return 0;
}

