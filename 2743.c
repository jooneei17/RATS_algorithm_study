#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//¿Ï¼º
int main() {
	char string[101] = { 0 };
	int last = 0;

	scanf("%s", &string);

	for (int i = 0; i < 100; i++) {
		if (string[i] != NULL)
			last++;
	}
	printf("%d", last);
	return 0;
}
