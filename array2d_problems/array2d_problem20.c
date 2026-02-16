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

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {

            int count = 0;

            for(int x = 0; x < R; x++) {
                for(int y = 0; y < C; y++) {
                    if(matrix[i][j] == matrix[x][y]) {
                        count++;
                    }
                }
            }

            if(count == 1) {
                printf("%d\n", matrix[i][j]);
                return 0;
            }
        }
    }

    return 0;
}
