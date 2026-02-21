#include <stdio.h>
int main(){
    float mark1,mark2,mark3,mark4,mark5,average,sum=0;
    scanf( "%f" "%f" "%f" "%f" "%f",mark1,mark2,mark3,mark4,mark5 );
    sum=mark1+mark2+mark3+mark4+mark5;
    average=sum/5;
    if (average>=90){
        printf("A");
    }
    else if (average>= 80  ){
        printf("B");
    }
     else if (average>=70   ){
        printf("C");
    }
     
     else if (average>= 60 ){
        printf("D");
    }
    else if (average>= 50 ){
        printf("E");
    }
     else  {
        printf("F");
     }
    return 0;
}