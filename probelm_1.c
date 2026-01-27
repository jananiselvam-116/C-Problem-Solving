#include <stdio.h>
int main() {
    int units;
    int c;
    int bill = 0;
    scanf("%d %d",&c,&units);
    switch(c){
          case 1:
        if(units<=100){
            bill = units*3;
            printf("%d",bill);
        }else if(units >= 100){
            bill = 100*3 + (units - 100)*5;
            bill -= 80;
        }
    
        break;
    
         case 2:{
        if(units<=100){
            bill = units*7;
            printf("%d",bill);
        }else if(units >= 100){
            bill = 100*7 + (units - 100)*10;
            printf("%d",bill);
        }
         }
        break;
    }
    return 0;
}
