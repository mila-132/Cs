#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int arr[9][9] = { 0 }, max = 0, row = 1, cal = 1;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &arr[i][j]);
			if (max < arr[i][j]) {
				max = arr[i][j];
				row = i + 1;
				cal = j + 1;

			}
		}
	}

	printf("%d \n%d %d", max, row, cal);
	return 0;
}