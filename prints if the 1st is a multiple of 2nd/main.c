#include <stdio.h>
#include <stdlib.h>

int main()
{
   int No1,No2;
    printf("Enter First Number\n");
    scanf("%d",&No1);
    printf("Enter Second Number\n");
    scanf("%d",&No2);
    if (No1%No2==0)
    {
        printf("%d is a multiple of %d\n",No1,No2);
    }
    else{
        printf("%d is not a multiple of %d\n",No1,No2);
    }
    return 0;
}
