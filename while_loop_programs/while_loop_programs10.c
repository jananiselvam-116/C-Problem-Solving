#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a == 0) {
            c++;
        }

        i++;
    }

    printf("Inactive Weeks: %d\n", c);

    if (c >= 3) {
        printf("Risk Status: High\n");
    } else {
        printf("Risk Status: Low\n");
    }

    return 0;
}
