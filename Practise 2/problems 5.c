#include <stdio.h>
int main(){
    int minutes;
    int steps;
    int fitness;
    scanf("%d",&minutes);
    scanf("%d",&steps);
    
    fitness=steps/minutes;
    
    if(fitness<60){
        printf("low fitness");
    }
    else if(fitness<100){
        printf("moderate fitness");
    }
    else if(fitness<130){
        printf("good fitness");
    }
    else{
        printf("Excellent fitness");
    }
    return 0;
    
    
}
