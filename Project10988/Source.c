#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char myText[1000] = {0};
	scanf("%s", myText);

	int length = strlen(myText);
	for (int i = 0; i < length / 2; i++) {
		if (length > 0) {
			if (myText[i] != myText[length - 1 - i]) {
				printf("0");
				return 0;
			}
		}
	}
	printf("1");
	return 0;
}