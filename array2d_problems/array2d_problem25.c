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
        int max = matrix[i][0];
        int min = matrix[i][0];

        for(int j = 1; j < C; j++) {
            if(matrix[i][j] > max)
                max = matrix[i][j];
            if(matrix[i][j] < min)
                min = matrix[i][j];
        }

        if(max - min <= 1000)
            count++;
    }

    printf("%d", count);

    return 0;
}
