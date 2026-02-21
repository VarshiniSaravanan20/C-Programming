#include <stdio.h>

int main() {
   float average,sum = 0,mark;
   int i;
   
   for(i=1; i<=6;i++){
       scanf("%f",&mark);
       sum=sum+mark;
  }
     average=sum/6;
     
     if(average>=95){
         printf("A");
     }
     else if (average>=85 ){
         printf("B");
     }
     else if (average>=75 ){
         printf("C");
     }
     else if (average>=65 ){
         printf("D");
     }else if (average>=45 ){
         printf("E");
     }
     else 
         printf("F");
     
     return 0;
     
}

