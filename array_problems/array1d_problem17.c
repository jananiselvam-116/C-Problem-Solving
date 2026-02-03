#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int i = 0, j = n - 1;
    int ok = 1;

    while (i < j) {
        if (a[i] != a[j]) {
            ok = 0;
            break;
        }
        i++;
        j--;
    }

    if (ok)
        printf("Yes");
    else
        printf("No");

    return 0;
}
