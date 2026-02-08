#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    for (int i = 0; i < R; i++) {
        int isPalindrome = 1;
        int left = 0, right = C - 1;

        while (left < right) {
            if (a[i][left] != a[i][right]) {
                isPalindrome = 0;
                break;
            }
            left++;
            right--;
        }

        if (isPalindrome)
            count++;
    }

    printf("%d", count);
    return 0;
}
