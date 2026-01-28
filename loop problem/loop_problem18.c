#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int gcd = 1;
    int min;
    if (A < B)
        min = A;
    else
        min = B;
    for (int i = 1; i <= min; i++) {
        if (A % i == 0 && B % i == 0) {
            gcd = i; 
        }
    }

    printf("%d", gcd);
    return 0;
}
