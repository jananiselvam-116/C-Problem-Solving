#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     if(1<=n  && n<=1000){
    for(int i=1;i<=n;i++){
        if(i%2==0){
            printf(" %d",i);
        }
    }
    }
    return 0;
    
}