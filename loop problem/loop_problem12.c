#include <stdio.h>

int main() {
    int N, P;
    scanf("%d %d", &N, &P);

    int result = 1; 

    for(int i = 1; i <= P; i++) {
        result = result * N;  
    }
    printf("%d", result);

    return 0;
}
