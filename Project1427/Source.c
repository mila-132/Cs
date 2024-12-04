#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define N 10

int main(void) {
	char input[N];
	int num[N], len, i, j, temp;

	scanf("%s", input);

	len = strlen(input);
	for (i = 0; i < len; i++) {
		num[i] = input[i] - '0';
	}
	for (i = 0; i < len - 1; i++) {
		for (j = i + 1; j < len; j++) {
			if (num[i] < num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
	for (i = 0; i < len; i++) {
		printf("%d", num[i]);
	}
	return 0;
}