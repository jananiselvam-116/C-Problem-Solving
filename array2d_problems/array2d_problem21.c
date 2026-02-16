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

    int maxLength = 0;
    int resultRow = 0;

    for(int i = 0; i < R; i++) {
        int currentLength = 1;

        for(int j = 1; j < C; j++) {
            if((matrix[i][j] % 2 == 0 && matrix[i][j-1] % 2 != 0) ||
               (matrix[i][j] % 2 != 0 && matrix[i][j-1] % 2 == 0)) {
                currentLength++;
            } else {
                break;
            }
        }

        if(currentLength > maxLength) {
            maxLength = currentLength;
            resultRow = i;
        }
    }

    printf("%d\n", resultRow);

    return 0;
}
