#include <stdio.h>

int main() {
    int a, b, c = 0, d, e;
    scanf("%d", &a);
    scanf("%d", &b);

    while (c < a) {
        scanf("%d", &d);
        b += d;
        if (b < 2000) {
            e++;
        }
        c++;
    }

    printf("Final Balance: %d\n", b);
    printf("Low Balance Days: %d\n", e);

    return 0;
}
