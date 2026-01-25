#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int div = a / b;
    int remain = a % b;
   
    printf("Quotient=%d ",div);
     printf("Remainder=%d",remain);

    return 0;
}