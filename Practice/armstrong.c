#include<stdio.h>
#include<conio.h>

int main()
{
    int i,r,sum=0,a;
    int temp;
    // printf("enter number : ");
    // scanf("%d",&num);

    for(i=1;i<=1000;i++)
    {
        temp=i;
        sum=0;
        while(temp!=0)
        {
        r=temp%10;
        temp=temp/10;
        sum=sum+(r*r*r);
        }
    if(sum==i)
    {
        printf("%d is Armstrong \n",i);
    }
    }
    getch();
}