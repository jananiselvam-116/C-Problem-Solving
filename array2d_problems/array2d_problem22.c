#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int count = 0;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for(int i = 0; i < R; i++) {
        int strictlyIncreasing = 1;

        for(int j = 1; j < C; j++) {
            if(matrix[i][j] <= matrix[i][j - 1]) {
                strictlyIncreasing = 0;
                break;
            }
        }

        if(strictlyIncreasing) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
