#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int X, N, a, b;
	int result = 0;
	scanf("%d %d", &X, &N);
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &a, &b);
		result += a * b;
	}
	if (result == X) {
		printf("Yes");
	}
	else {
		printf("No");
	}
	return 0;

}
