#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    for (int i = 1; i <= N; i++) {
        if (N % i == 0) {
            count++;
        }
    }

    if (count == 2) {
        printf("Prime");
    } else {
        printf("Not Prime");
    }

    return 0;
}
