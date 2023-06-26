#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks[10],total=0;
    for(int i=0;i<10;i++);{
        printf("Enter Marks: ");
        scanf("%d",&marks);
        total+=marks;
    }
   printf("Total: %d\n");
   printf("Average: %.2f\n",(float)total/10);
   float avg=total/10;
   if (avg>50){
    printf("Pass\n");
   }
    else{
    printf("Fail\n");
   }
    return 0;
}
