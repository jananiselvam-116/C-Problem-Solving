#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int stops[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &stops[i]);
    }

    int left = 0, right = n - 1, temp;

    while(left < right) {
        temp = stops[left];
        stops[left] = stops[right];
        stops[right] = temp;
        left++;
        right--;
    }

    for(int i = 0; i < n; i++) {
        printf("%d ", stops[i]);
    }

    return 0;
}
