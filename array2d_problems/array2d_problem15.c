#include <stdio.h>

int isPrime(int num) {
    if (num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int R, C;
    scanf("%d %d", &R, &C);

    int matrix[R][C];
    int count = 0;

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &matrix[i][j]);
            if (isPrime(matrix[i][j])) {
                count++;
            }
        }
    }

    printf("%d", count);

    return 0;
}
