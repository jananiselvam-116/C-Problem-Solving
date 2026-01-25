#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int div = a;
    div /= b;
    int rem = a;
    rem %= b;
    printf("%d %d",div,rem);

    return 0;

}