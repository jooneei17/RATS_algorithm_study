#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//****
void encrypt(char cipher[], int shift);

int main() {
	char cipher[50];
	int shift = 13;

	printf("���ڿ��� �Է��Ͻÿ�: ");
	gets_s(cipher, 50);
	encrypt(cipher, shift);
	return 0;
}

void encrypt(char cipher[], int shift) {
	int i = 0;

	while (cipher[i] != '\0') {
		if (cipher[i] >= 'A' && cipher[i] <= 'Z') {
			cipher[i] += shift;
			if (cipher[i] > 'Z')
				cipher[i] -=26;//��踦 �Ѿ���� 26�� ���� ������..
		}
		else if (cipher[i] >= 'a' && cipher[i] <= 'z') {
			if (cipher[i] + shift > 127)
				cipher[i] -= 26;
			cipher[i] += shift;
			if(cipher[i] > 'z')
				cipher[i] -= 26;
		}
		i++;
	}
	printf("��ȣȭ�� ���ڿ�: %s \n", cipher);
}
