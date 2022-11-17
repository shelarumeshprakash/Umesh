#include<stdio.h>
#include<conio.h>
int main()
{
    int m,x,y,z,p,q,r,s;
    int i,j;
    printf("enter the amount of : ");
    scanf("%d",&m);
    x=m/100;
    y=(m%100)/50;
    z=(m%50)/20;
    p=(m%20)/10;
    q=(m%10)/5;
    r=(m%5)/1;
    printf("values of x is:100 %d\n",x);
    printf("values of y is:50 %d\n",y);
    printf("values of z is:20 %d\n",z);
    printf("values of p is:10 %d\n",p);
    printf("values of q is:5 %d\n",q);
    printf("values of r is:1 %d\n",r);
getch();
}