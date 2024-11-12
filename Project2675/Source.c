#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int R, T;
	char S[21];
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		scanf("%d %s", &R, &S);
		for (int i = 0; i < strlen(S); i++) {
			for (int j = 0; j < R; j++)
				printf("%c", S[i]);
		}
		printf("\n");
	}
	return 0;
}