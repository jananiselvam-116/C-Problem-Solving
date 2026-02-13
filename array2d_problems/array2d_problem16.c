#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int minSum = 1000000000;
    int minIndex = -1;

    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
            sum += matrix[i][j];
        }

        if (sum != 0 && sum < minSum) {
            minSum = sum;
            minIndex = i;
        }
    }

    printf("%d", minIndex);

    return 0;
}
