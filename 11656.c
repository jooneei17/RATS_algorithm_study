#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//***
int main() {
	
	char s1[101] = { 0 };
	char s2[101][101] = { 0 };
	char temp[101] = { 0 };
	
	int length;
	

	scanf("%s", s1);
	length = strlen(s1);

	for (int i = 0; i < length; i++) {
		for (int j = i; j < length; j++)
			s2[i][j - i] = s1[j];
	}
	for (int i = 0; i < length - 1; i++) {
		for (int j = 0; j < length - 1 - i; j++) {
			if (strcmp(s2[j], s2[j + 1]) > 0) {
				strcpy(temp, s2[j]);
				strcpy(s2[j], s2[j + 1]);
				strcpy(s2[j + 1], temp);


			}
		}
	}
	for (int i = 0; i < length; i++) {
		printf("%s\n", s2[i]);
	}
	
	return 0;

}
