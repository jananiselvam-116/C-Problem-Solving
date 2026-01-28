#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int count = 0;
    for (int i = 2; i <= N; i++) {
        int isPrime = 1;  
        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; 
                break;
            }
        }

        if (isPrime) {
            count++;
        }
    }

    printf("%d", count);
    return 0;
}
