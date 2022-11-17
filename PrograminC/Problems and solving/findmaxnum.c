#include<stdio.h>
#include<conio.h>
int main()
{
    int n1,n2,n3;
    printf("Enter the num 1 : ");
    scanf("%d",&n1);
    printf("Enter the num 2 : ");
    scanf("%d",&n2);
    printf("Enter the num 3 : ");
    scanf("%d",&n3);
    if((n1>n2)&&(n1>n3))
    {
            printf("max num is: %d",n1);
    }
    if((n2>n1)&&(n2>n3))
    {
            printf("max num is: %d",n2);
    }
    else
    {
        printf("max num is: %d",n3);
    }

getch();
}