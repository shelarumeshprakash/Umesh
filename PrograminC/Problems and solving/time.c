#include<stdio.h>
#include<conio.h>
int main()
{
    int m,x,y,z,p,q,r,s;
    int i,j;
    printf("enter the amount of : ");
    scanf("%d",&m);
    x=m/3600;
    y=(m%3600)/60;
    z=(m%60);
    
    printf("values of hour is:  %d\n",x);
    printf("values of minute is:  %d\n",y);
    printf("values of secounds are: %d\n",z);
    
getch();
}