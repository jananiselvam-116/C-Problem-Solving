#include <stdio.h>

int main() {
    int m;
    scanf("%d", &m);

    int n;
    scanf("%d", &n);

    int a;
    int s = 0;
    int c = 0;

    int i = 0;
    while (i < n) {
        scanf("%d", &a);

        if (s + a > m) {
            break;
        }

        s = s + a;
        c++;
        i++;
    }

    printf("Passengers Allowed: %d\n", c);

    if (i < n) {
        printf("Overload: Yes\n");
    } else {
        printf("Overload: No\n");
    }

    return 0;
}
