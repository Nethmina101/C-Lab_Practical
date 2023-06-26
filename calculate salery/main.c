#include <stdio.h>
#include <stdlib.h>

int main()
{
    char empname [20];
    float bs,inc,ns;
    //input employee name ,basic salary
    printf("Enter Employee Name \n");
    scanf("%s",&empname);
    printf("Enter Basic Salary \n");
    scanf("%f",&bs);
    //process(if)
    if(bs>=10,000)
    inc=bs*0.15;
    else if(bs>=5,000)
    inc=bs*0.10;
    else
    inc=bs*0.05;
    //output employee name with new salery
    ns=bs+inc;
    printf("Employee Name %s \n",empname);
    printf("New Salary %.2f",ns);
    return 0;
}
