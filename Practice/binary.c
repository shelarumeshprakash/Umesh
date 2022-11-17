#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c=0,d=0;
    int i;
    printf("enter the num for binary: ");
    scanf("%d",&a);
    for(i=a;i>0;i=i/2)
    {
        printf("%d\n",i);
        if(i%2==0)
        {
            b=0;
        }
        else
        {
            b=1;
        }
        c=c*10+b;
    }
    printf("binary code : %d ",c);
    int j,e;
    for(j=c; c!=0; c=c/10)
    {
    e=c%10;
    d=d*10+e;
    }
    printf(" reverce binary code : %d ",d);
    getch();
}