#include<stdio.h>
#include<conio.h>

int main()
{
    int n,i,t=0,pv=0,pe=1;
    printf("enter the num : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        t=pv+pe;
        printf("%d ",t);
        pv=pe;
        pe=t;
    }
    getch();
}