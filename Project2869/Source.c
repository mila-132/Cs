#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int A, B, V, C;
	scanf("%d %d %d", &A, &B, &V);

	C = (V - B - 1) / (A - B) + 1;
	printf("%d", C);


	return 0;
}