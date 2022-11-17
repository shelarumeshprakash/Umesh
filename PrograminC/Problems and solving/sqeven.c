//Write a C program to find and print the square of each one of the even values from 1 to a specified value.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y=1,i;
    printf("enter the last number of even number:");
    scanf("%d",&x);
    for(i=2;i<=x;i++)
    {
        if((i%2)!=0)
        {
            y=i*i;
            printf("square is :%d\t%d\n",i,y);
        }
    }
getch();
}