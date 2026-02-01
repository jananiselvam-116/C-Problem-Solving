#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);

    int n;
    scanf("%d", &n);

    int a;
    int o = 0;
    int k = 0;

    int l = (c * 90) / 100;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);
        o = o + a;

        if (o > l) {
            k++;
        }

        i++;
    }

    printf("Final Occupied Beds: %d\n", o);
    printf("Critical Hours: %d\n", k);

    return 0;
}
