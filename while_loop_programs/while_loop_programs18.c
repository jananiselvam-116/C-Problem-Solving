#include <stdio.h>

int main() {
    int c;
    scanf("%d", &c);

    int n;
    scanf("%d", &n);

    int a;
    int s = 0;
    int f = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (a > c) {
            f++;
        } else {
            s++;
        }

        i++;
    }

    printf("Safe Hours: %d\n", s);
    printf("Failure Count: %d\n", f);

    return 0;
}
