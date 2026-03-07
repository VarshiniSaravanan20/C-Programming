#include <stdio.h>

int main()
{
    int mid1,mid2,final,project,max;

    printf("Enter 4 scores: ");
    scanf("%d %d %d %d",&mid1,&mid2,&final,&project);

    max = mid1;

    if(mid2 > max)
        max = mid2;

    if(final > max)
        max = final;

    if(project > max)
        max = project;

    printf("Highest score = %d",max);

    return 0;
}