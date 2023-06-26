#include <stdio.h>
#include <stdlib.h>

int main()
{
double No1,No2;
int choice;
printf("Enter Two Numbers:",No1,No2);
scanf("%lf%lf",&No1,&No2);
printf("1.Addition\n");
printf("2.Substraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");
printf("Please Enter Your Choice\n");
scanf("%d",&choice);
switch(choice)
{
case 1:
	printf("%.2lf+%.2lf=%.2lf\n",No1,No2,No1+No2);
	break;
case 2:
	printf("%.2lf-%.2lf=%.2lf\n",No1,No2,No1-No2);
	break;
case 3:
	printf("%.2lf*%.2lf=%.2lf\n",No1,No2,No1*No2);
	break;
case 4:
    if(No2!=0){
        printf("%.2lf/%.2lf=%.2lf\n",No1,No2,No1/No2);
    }else{
        printf("Error\n");
    }
    break;
    default:
	printf("invalid Choice\n");
	break;
}
    return 0;
}
