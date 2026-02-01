#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int c = 0;
    int u = 0;
    int x = -1;

    int i = 1;
    while (i <= n) {
        scanf("%d", &a);

        if (a > 70) {
            u++;
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
        printf("Breakdown At Reading: Not Occurred\n");
    } else {
        printf("Breakdown At Reading: %d\n", x);
    }

    printf("Unsafe Readings: %d\n", u);

    return 0;
}
