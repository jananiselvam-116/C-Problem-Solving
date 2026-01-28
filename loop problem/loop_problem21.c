#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int decimal = 0;
    int base = 1;  

    for (; N != 0; N = N / 10) {
        int digit = N % 10;
        decimal += digit * base;
        base = base * 2;
    }

    printf("%d", decimal);
    return 0;
}
