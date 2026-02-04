#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int a = -100000, b = -100000;   
    int c = 100000, d = 100000;    

    for (int i = 0; i < n; i++) {

        
        if (arr[i] > a) {
            b = a;
            a = arr[i];
        } else if (arr[i] > b) {
            b = arr[i];
        }

        
        if (arr[i] < c) {
            d = c;
            c = arr[i];
        } else if (arr[i] < d) {
            d = arr[i];
        }
    }

    int p1 = a * b;
    int p2 = c * d;

    if (p1 > p2)
        printf("%d", p1);
    else
        printf("%d", p2);

    return 0;
}
