#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int s = 0;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);
        s = s + a;

        if (a > 2) {
            c++;
        }

        i++;
    }

    printf("Total Delay: %d\n", s);
    printf("Delayed Days: %d\n", c);

    return 0;
}
