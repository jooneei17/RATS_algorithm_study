#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//***¿Ï¼º
int main() {
	
	char s[100];
	int alpha[26] = { 0 };
	scanf("%s", s);
	for (int i = 0; i < strlen(s);i++) {
		alpha[s[i] - 'a']++;// ex) 'b'-'a' = 1 
	}
	for (int i = 0; i < 26; i++) {
		printf("%d ", alpha[i]);
	}

	
	return 0;	
}


