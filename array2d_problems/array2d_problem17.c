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

    int count = 0;

    for(int i = 0; i < R; i++) {
        int diagonal = matrix[i][i];
        int sum = 0;

        for(int j = 0; j < C; j++) {
            if(j != i) {
                sum += matrix[i][j];
            }
        }

        if(diagonal > sum) {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
