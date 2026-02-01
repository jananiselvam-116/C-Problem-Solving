#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int c = 0;
    int m = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a == 0) {
            c++;
            if (c > m) {
                m = c;
            }
        } else {
            c = 0;
        }

        i++;
    }

    printf("Longest Failure Streak: %d\n", m);

    return 0;
}
