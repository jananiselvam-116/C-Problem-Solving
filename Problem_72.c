#include <stdio.h>

int main() {
    int a,b;
    char op;
    scanf("%d %c %d",&a,&op,&b);
   switch(op){
       case'+':{
       int result = a + b;
       printf("Result = %d",result);
       break;
       }
       default:
       printf("Invalid");
   }
    

    return 0;
}