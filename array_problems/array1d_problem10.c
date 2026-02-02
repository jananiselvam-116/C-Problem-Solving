#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int a[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int max = -1;
    for(int i = n - 1; i >= 0; i--) {
        int curr = a[i];
        a[i] = max;
        if(curr > max) {
            max = curr;
        }
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
