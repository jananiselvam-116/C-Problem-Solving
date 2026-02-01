#include <stdio.h>

int main() {
    int d;
    scanf("%d", &d);

    int n;
    scanf("%d", &n);

    int a;
    int i = 0;
    int x = -1;

    while (i < n && d > 0) {
        scanf("%d", &a);
        d = d - a;
        i++;
        if (d <= 0) {
            x = i;
            break;
        }
    }

    if (x == -1) {
        printf("Exhausted Day: Not Exhausted\n");
        printf("Overused Data: 0\n");
    } else {
        if (d < 0) {
            d = -d;
        } else {
            d = 0;
        }
        printf("Exhausted Day: %d\n", x);
        printf("Overused Data: %d\n", d);
    }

    return 0;
}
