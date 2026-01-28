#include <stdio.h>

int main() {
    int M, N;
    scanf("%d %d", &M, &N);

    int sum = 0;

    for(int i = M; i <= N; i += M) { 
        sum += i;
    }

    printf("%d", sum);

    return 0;
}
