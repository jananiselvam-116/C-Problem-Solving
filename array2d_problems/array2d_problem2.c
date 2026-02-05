#include <stdio.h>
#include <limits.h>

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int a[R][C];
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int rowMax[R], rowMin[R];

       for (int i = 0; i < R; i++) {
        rowMax[i] = INT_MIN;
        rowMin[i] = INT_MAX;

        for (int j = 0; j < C; j++) {
            if (a[i][j] > rowMax[i])
                rowMax[i] = a[i][j];
            if (a[i][j] < rowMin[i])
                rowMin[i] = a[i][j];
        }
    }

    int maxProduct = INT_MIN;

    
    for (int i = 0; i < R; i++) {
        for (int j = i + 1; j < R; j++) {
            int prod1 = rowMax[i] * rowMax[j];
            int prod2 = rowMin[i] * rowMin[j];

            if (prod1 > maxProduct)
                maxProduct = prod1;
            if (prod2 > maxProduct)
                maxProduct = prod2;
        }
    }

    printf("%d", maxProduct);

    return 0;
}
