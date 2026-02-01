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

    printf("People Entered: %d\n", c);

    if (i < n) {
        printf("Overload Status: Yes\n");
    } else {
        printf("Overload Status: No\n");
    }

    return 0;
}
