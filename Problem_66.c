#include <stdio.h>

int main() {
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    if(num1+ num2+num3==180){
         printf("Valid triangle");
    }else {
       
         printf("Not Valid triangle");
    }
    

    return 0;
}