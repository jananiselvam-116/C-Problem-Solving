#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
   
    if(1<=n  && n<=20){
         for(int i = 1;i<=10;i++){
            printf(" %d",i*n);
         }
     }
        
    return 0;
    
}