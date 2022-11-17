#include<stdio.h>
#include<conio.h>

int main()
{
    int y,d,w,d2;
    printf("enter the days which user want to convert : ");
    scanf("%d\n",&d);
    y=d/365;
    w=(d-(y*365))/7;
    d2=d-((y*365)+(w*7));
    printf("years are : %d\n",y);
    printf("weeks are : %d\n",w);
    printf("weeks are : %d\n",d2);
    getch();
}