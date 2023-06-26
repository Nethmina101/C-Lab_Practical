#include <stdio.h>
#include <stdlib.h>

int main()
{
    float no1,no2,avg;
    printf("Enter First Number\n");
    scanf("%f",&no1);
    printf("Enter Second Number\n");
    scanf("%f",&no2);
    avg=(no1+no2)/2;
    printf("Average is %f\n",avg);
    /*to limit decimals
    printf"Average is %.2f"\n,avg); */

    return 0;
}
