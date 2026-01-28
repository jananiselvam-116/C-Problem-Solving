#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int sum = 0;
    for (; N != 0; N = N / 10) {
        int digit = N % 10;
        int fact = 1;
        for (int i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;
    }

    if (sum == original) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
