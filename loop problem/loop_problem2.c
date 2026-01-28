#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    scanf("%d",&n);
    if(1<=n && n<=1000)
    {
        for(int i = 1;i <= n;i++)
        {
            sum = sum + i;
        }
    }
            printf("%d",sum);
    return 0;
}