#include<stdio.h>
#include<conio.h>

int main()
{
    int fact=1,i,num;
    printf("enter a num to find factorial: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    printf("factorial is: %d ",fact);

    getch();
}
