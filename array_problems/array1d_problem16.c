#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int price[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &price[i]);
    }

    int min = price[0];
    int maxDiff = price[1] - price[0];

    for (int i = 1; i < n; i++) {
        int diff = price[i] - min;

        if (diff > maxDiff) {
            maxDiff = diff;
        }

        if (price[i] < min) {
            min = price[i];
        }
    }

    printf("%d", maxDiff);
    return 0;
}
