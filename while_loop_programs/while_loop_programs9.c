#include <stdio.h>

int main() {
    int f;
    scanf("%d", &f);

    int n;
    scanf("%d", &n);

    int a;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (f < a) {
            break;
        }

        f = f - a;
        c++;
        i++;
    }

    printf("Completed Trips: %d\n", c);
    printf("Remaining Fuel: %d\n", f);

    return 0;
}
