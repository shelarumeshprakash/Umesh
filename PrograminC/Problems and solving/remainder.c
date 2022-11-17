//Write a C program to print all numbers between 1 to 100 which divided by a specified number and the remainder will be 3.
#include<stdio.h>
#include<conio.h>
int main()
{
    int x,y;
    printf("enter an integer value: ");
    scanf("%d", &y);
    for(x=0;x<=100;x++)
    {
        if(x%y==3)
        {
            printf("number is: %d\n",x);
        }
    }
getch();
}