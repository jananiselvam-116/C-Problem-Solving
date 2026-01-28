#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int max;
    if (A > B)
        max = A;
    else
        max = B;

    int lcm = max;
    for (int i = max; ; i++) {
        if (i % A == 0 && i % B == 0) {
            lcm = i;
            break;
        }
    }

    printf("%d", lcm);
    return 0;
}
