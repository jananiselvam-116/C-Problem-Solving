#include <stdio.h>

int main() {
    int a, b, c = 0, d, e;
    scanf("%d", &a);
    scanf("%d", &b);
    e = a;

    while (c < b && e > 0) {
        scanf("%d", &d);
        e -= d;
        if (e < 0) e = 0;
        c++;
        if (e == 0) break;
    }

    printf("Days Used: %d\n", c);
    printf("Remaining Data: %dGB\n", e);

    return 0;
}
