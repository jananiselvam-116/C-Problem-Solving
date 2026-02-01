#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);

    int n;
    scanf("%d", &n);

    int a;
    int s = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (c < a) {
            break;
        }

        c = c - a;
        s++;
        i++;
    }

    printf("Successful Withdrawals: %d\n", s);
    printf("Remaining Cash: %d\n", c);

    return 0;
}
