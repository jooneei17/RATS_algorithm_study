#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


//2����-> 8������ 


int main() {

	int s;
	char binary[1000001];
	scanf("%s", binary);
	int length = strlen(binary);

	int part = ((int)length / 3);

	if (binary[0] - 48 == 0) printf("0");//??
	else {
		if (length % 3 == 1) {
			printf("1");//??
			s = 1;
			for (int i = 0; i < part; i++) {//�ؿ��ٿ� 48�� �� ����..?? ���ص� �̻��ϱ� �ѵ�
				printf("%d", 4 * (binary[s + 3 * i] - 48) + 2 * (binary[s + 3 * i + 1] - 48) + (binary[s + 3 * i + 2] - 48));
			}
		}
		else if (length % 3 == 2) {
			printf("%d", 2 * (binary[0] - 48) + binary[1] - 48);
			s = 2;
			for (int i = 0; i < part; i++) {
				printf("%d", 4 * (binary[s + 3 * i] - 48) + 2 * (binary[s + 3 * i + 1] - 48) + (binary[s + 3 * i + 2] - 48));
			}
		}
		else {
			s = 0;
			for (int i = 0; i < part; i++) {
				printf("%d", s * (binary[s + 3 * i] - 48) + 2 * (binary[s + 3 * i + 1] - 48) + (binary[s + 3 * i + 2] - 48));
			}
		}
	}



	return 0;
}


