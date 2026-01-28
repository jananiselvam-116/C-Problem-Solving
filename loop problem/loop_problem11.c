#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int sum = 0;
    for(; N != 0; N = N / 10) {
        int digit = N % 10; 
        sum += digit;      
    }
    printf("%d", sum);

    return 0;
}
