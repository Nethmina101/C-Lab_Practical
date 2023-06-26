#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2,max;
    printf("Enter 2 Numbers\n");
    scanf("%d%d",&no1,&no2);
    if (no1>no2)
    max=no1;
    else
    max=no2;
    printf("The Highest Number Is %d",max);
    return 0;
}
