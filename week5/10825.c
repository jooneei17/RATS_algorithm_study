#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmp(const void* a, const void* b);

typedef struct KEM {
	char name[11];
	int kor, eng, math;
}kem;

kem member[100001];

int main() {
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) 
		scanf("%s %d %d %d", member[i].name, &member[i].kor, &member[i].eng, &member[i].math);

	
	qsort(member, n, sizeof(kem), cmp);//qsort(������ �迭, ��� ����, ��� ũ��, ���Լ�);

	for (int i = 0; i < n; i++) {
		printf("%s\n", member[i].name);
	}

	return 0;
}

int cmp(const void* a, const void* b) {//�� const�� ����? �� void* �ϱ�?
	kem* temp1, * temp2;
	temp1 = (kem*)a;
	temp2 = (kem*)b;

	if (temp1->kor > temp2->kor) {
		return -1;
	}
	else if (temp1->kor == temp2->kor) {
		if (temp1->eng < temp2->eng) {
			return -1;
		}
		else if (temp1->eng == temp2->eng) {
			if (temp1->math > temp2->math) {
				return -1;
			}
			else if (temp1->math == temp2->math) {
				if (strcmp(temp1->name,temp2->name)<0){
					//���� < ������ �� ��,
					return -1;
				}
				else return 1;
			}
			else return 1;
		}
		else return 1;

	}
	else return 1;

}
