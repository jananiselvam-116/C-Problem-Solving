#include <stdio.h>

int main() {
    int b;
    scanf("%d", &b);

    int n;
    scanf("%d", &n);

    int a;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (b < a) {
            break;
        }

        b = b - a;
        c++;
        i++;
    }

    printf("Successful Purchases: %d\n", c);
    printf("Final Balance: %d\n", b);

    return 0;
}
