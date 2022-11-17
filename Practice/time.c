//minute to hour and minutes
#include<stdio.h>
#include<conio.h>
int main()
{
    int m,h,rem,temp;
    printf("enter the minutes\n");
    scanf("%d",&m);
    h=m/60;
    m=m-(h*60);
    printf("hour is: %d and minutes are : %d",h,m);
}