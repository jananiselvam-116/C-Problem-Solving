#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    int original = N;
    int rev = 0;
    for (; N != 0; N = N / 10) {
        int digit = N % 10;
        rev = rev * 10 + digit;
    }

    if (rev == original) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
