#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {

	int small, big , num , blank ;
	char arr[100];
	int length;

	
	while (gets_s(arr,sizeof(arr)) != '\0') {

		small = 0, big = 0, num = 0, blank = 0;

		length = strlen(arr);

		for (int i = 0; i < length; i++) {
			if (arr[i] >= 'a' && arr[i] <= 'z')
				small++;
			else if (arr[i] >= 'A' && arr[i] <= 'Z')
				big++;
			else if (arr[i] >= '0' && arr[i] <= '9')
				num++;
			else if (arr[i] == ' ')
				blank++;
		}

		printf("%d %d %d %d\n", small, big, num, blank);
	}

	return 0;
}





// 인터넷에서 찾은 코드... 왜 얜 되고 내껀 안되냐고...
/*
int main() {
	char n[101];
	int big, sm, sp, num, length, i;

	while (gets(n) != '\0') {

		length = strlen(n);

		big = 0; sm = 0; sp = 0; num = 0;

		for (i = 0; i < length; i++) {
			if (n[i] >= 65 && n[i] <= 90)
				big++;
			else if (n[i] >= 97 && n[i] <= 122)
				sm++;
			else if (n[i] == 32)
				sp++;
			else if (n[i] >= 47 && n[i] <= 57)
				num++;

		}
		printf("%d %d %d %d\n", sm, big, num, sp);
	}
}
*/