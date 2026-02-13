#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    int maxSum = -1000000000;
    int maxIndex = 0;

    for(int j = 0; j < C; j++) {
        int sum = 0;
        for(int i = 0; i < R; i++) {
            sum += matrix[i][j];
        }
        if(sum > maxSum) {
            maxSum = sum;
            maxIndex = j;
        }
    }

    printf("%d", maxIndex);

    return 0;
}
