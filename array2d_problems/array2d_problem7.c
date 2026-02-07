#include <stdio.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int count = 0;

    for(int i = 0; i < R; i++) {
        for(int j = 0; j < C; j++) {
            int rowMin = 1, colMax = 1;

            for(int k = 0; k < C; k++) {
                if(a[i][k] < a[i][j]) {
                    rowMin = 0;
                    break;
                }
            }

            for(int k = 0; k < R; k++) {
                if(a[k][j] > a[i][j]) {
                    colMax = 0;
                    break;
                }
            }

            if(rowMin && colMax) {
                count++;
            }
        }
    }

    printf("%d", count);
    return 0;
}
