#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
	int N, M;
	scanf("%d%d", &N, &M);

	int** A = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		A[i] = (int*)malloc(sizeof(int) * M);
	}

	int** B = (int**)malloc(sizeof(int*) * N);
	for (int i = 0; i < N; i++) {
		B[i] = (int*)malloc(sizeof(int) * M);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%d", &B[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			A[i][j] += B[i][j];
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < N; i++) {
		free(A[i]);
		free(B[i]);
	}
	free(A); free(B);
	return 0;
}