#include <stdio.h>
int main(){
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    int t;
    t= y*z;
    if(x>=t){
        printf("1");
    }
    else{
        printf("0\n");
        int u;
        u = x/y;
        printf("%d",u);
    }
    return 0;
}