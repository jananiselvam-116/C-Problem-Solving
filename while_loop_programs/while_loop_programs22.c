#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int c = 0;
    int t = 0;
    int x = -1;

    int i = 1;
    while (i <= n) {
        scanf("%d", &a);

        if (a == 0) {
            t++;
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
        printf("Lock Triggered At Attempt: Not Locked\n");
    } else {
        printf("Lock Triggered At Attempt: %d\n", x);
    }

    printf("Total Failed Attempts: %d\n", t);

    return 0;
}
