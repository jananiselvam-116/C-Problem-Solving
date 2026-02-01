#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int m = 0;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a > m) {
            m = a;
        }

        if (a > 5) {
            c++;
        }

        i++;
    }

    printf("Max Usage: %d\n", m);
    printf("Surge Hours: %d\n", c);

    return 0;
}
