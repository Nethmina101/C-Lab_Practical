#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter A Number\n");
    scanf("%d",&n);
    switch(n%2)
    {
    case 0 :printf("Even Number\n");break;
    case 1 :printf("Odd Number\n");break;
   }
}
