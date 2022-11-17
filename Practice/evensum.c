#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c=0,i;
    printf("enter a num:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i%2==0)
        printf("even num : %d\n",i);
        c=c+i;
    
    }
    printf("sum of even number are: %d",c);
    getch();
}