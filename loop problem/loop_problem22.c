#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int primeCount = 0;
    for (int i = 2; i <= N; i++) {
        int divisorCount = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0) {
                divisorCount++;
            }
        }
        if (divisorCount == 2) {
            primeCount++;
        }
    }

    printf("%d", primeCount);
    return 0;
}
