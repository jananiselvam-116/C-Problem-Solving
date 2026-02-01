#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int c = 0;
    int h = 0;
    int x = -1;

    int i = 1;
    while (i <= n) {
        scanf("%d", &a);

        if (a >= 50000) {
            h++;
            c++;
            if (c == 3 && x == -1) {
                x = i;
            }
        } else {
            c = 0;
        }

        i++;
    }

    if (x == -1) {
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    } else {
        printf("Fraud Triggered At Attempt: %d\n", x);
    }

    printf("High-Value Transactions: %d\n", h);

    return 0;
}
