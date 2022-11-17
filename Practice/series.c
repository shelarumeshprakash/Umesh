#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,i;
    float c=0;
    printf("enter a num:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        if(i<=a)
        printf(" 1/%d +",i);
        c=c+(1/(float)i);
    
    }
    printf("sum of even number are: %f",c);
    getch();
}