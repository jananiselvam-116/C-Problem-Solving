#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = a[n - 1];
    printf("%d ", max);

    for(int i = n - 2; i >= 0; i--) {
        if(a[i] > max) {
            max = a[i];
            printf("%d ", max);
        }
    }

    return 0;
}
