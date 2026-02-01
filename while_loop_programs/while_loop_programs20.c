#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int p, a;
    scanf("%d", &p);

    int d = 0;
    int c = 0;
    int x = -1;

    int i = 2;
    while (i <= n) {
        scanf("%d", &a);

        if (a < p) {
            d++;
            c++;
            if (c == 3 && x == -1) {
                x = i;
            }
        } else {
            c = 0;
        }

        p = a;
        i++;
    }

    if (x == -1) {
        printf("Crash Day: Not Detected\n");
    } else {
        printf("Crash Day: %d\n", x);
    }

    printf("Total Drops: %d\n", d);

    return 0;
}
