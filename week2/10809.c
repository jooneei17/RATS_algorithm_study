#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//*** ¿Ï¼º
int main() {
	char s[100] = { 0 };
	int j;
	scanf("%s", s);

	for (int i = 'a'; i <= 'z';i++) {
		j = 0;
		while (s[j] != 0) {
			if (s[j] == (char)i)break;
			j++;
		}
		if (s[j] == (char)i) printf("%d ", j);
		else printf("-1 ");
		}
	
	return 0;
}
