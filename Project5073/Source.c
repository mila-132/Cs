#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int A, B, C;

	while (1) {
		scanf("%d %d %d", &A, &B, &C);

		if (A == 0 && B == 0 && C == 0) {
			break;
		}
		if (A == B && B == C) {
			printf("Equilateral\n");
		}
		else if (A >= B + C || B >= A + C || C >= A + B) {
			printf("Invalid\n");
		}
		else if (A == B || B == C || A == C) {
			printf("Isosceles\n");
		}
		else if (A != B || B != C || A != C) {
			printf("Scalene\n");
		}
		
	}
	return 0;
}