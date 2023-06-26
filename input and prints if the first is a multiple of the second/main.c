#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no1,no2;
    printf("Enter The First Number\n");
    scanf("%d",&no1);
    printf("Enter The Second Number\n");
    scanf("%d",&no2);
    if(no1==no2*2)
    {
        printf("The First Number is %d\n",no1);
        printf("The Second Number is %d\n",no2);
    }
    else
    {
        printf("Error");
    }
    return 0;
}
