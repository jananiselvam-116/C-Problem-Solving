#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int min = INT_MAX;
    int found = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            if (arr[i] < min) {
                min = arr[i];
                found = 1;
            }
        }
    }

    if (found) {
        printf("%d", min);
    } else {
        printf("No positive");
    }

    return 0;
}
