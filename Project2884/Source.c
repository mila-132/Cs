#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int H, M;
    scanf("%d %d", &H, &M);

    if (M < 45) {
        M += 60 - 45;
        H--;
        if (H < 0)
            H = 23;
    }
    else {
        M -= 45;
    }

    printf("%d %d", H, M);
    return 0;
}
