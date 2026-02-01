#include <stdio.h>

int main() {
    int f;
    scanf("%d", &f);

    int n;
    scanf("%d", &n);

    int a;
    int i = 1;
    int x = -1;

    while (i <= n) {
        scanf("%d", &a);
        f = f - a;

        if (f < 0 && x == -1) {
            x = i;
            break;
        }

        i++;
    }

    if (x == -1) {
        printf("Emergency Stage: Not Occurred\n");
        printf("Fuel Wasted: 0\n");
    } else {
        printf("Emergency Stage: %d\n", x);
        printf("Fuel Wasted: %d\n", -f);
    }

    return 0;
}
