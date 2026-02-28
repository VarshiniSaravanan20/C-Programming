#include <stdio.h>

int main() {
	int day;
	scanf("%d",&day);
	 if(day==1) {
        printf("sunday\n monday");
    }
	if(day==2){
	    printf("monday\n tuesday");
	}
    else if(day==3){
        printf("tuseday\n wednesday");
    }
    else if(day==4) {
        printf("wednesday\n thursday");
    }
    else if(day==5) {
        printf("thursday\n friday");
    }
    else if(day==6) {
        printf("friday\n saturday");
    }
    else if(day==7){
        printf("saturday\n sunday");
    }
    else{
     printf("invalid");
    }
    return 0;
}
