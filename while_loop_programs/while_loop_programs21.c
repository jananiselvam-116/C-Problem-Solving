#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a;
    int c = 0;
    int s = 0;
    int m = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a > 20) {
            c++;
            s++;
            if (s > m) {
                m = s;
            }
        } else {
            s = 0;
        }

        i++;
    }

    printf("Congestion Minutes: %d\n", c);
    printf("Longest Congestion Streak: %d\n", m);

    return 0;
}
