#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("Enter a Number");
    scanf("%d",&no);
    if(no%2==0)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}
