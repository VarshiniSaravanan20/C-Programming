#include <stdio.h>

int main(){
    int w,b,d;

    scanf("%d %d",&w,&b);

    if(w<0 || b<0){
        printf("Invalid");
    }

    else if(w%100!=0){
        printf("InvalidAmount");
    }

    else if(w+10>b){
        printf("InsufficientFunds");
    }

    else{
        d=b-(w+10);
        printf("%d",d);
    }

    return 0;
}