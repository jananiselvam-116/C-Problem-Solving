#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int unique = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                unique = 0;
                break;
            }
        }
        if (unique == 0)
            break;
    }

    if (unique)
        printf("Yes");
    else
        printf("No");

    return 0;
}
