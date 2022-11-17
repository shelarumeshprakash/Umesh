//Write a C program that read 5 numbers and counts the number of positive numbers and negative numbers
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5];
    int p=0,n=0,i,j,x=0,y=0;
    printf("enter five number : ");
    for(i=0;i<5;i++)
    {
    scanf("%d",&a[i]);
    }
    for(j=0;j<i;j++)
    {
    if(a[j]>0)
    {
        p=p+a[j];
        x++;
    }
    else if(a[j]<0)
    {
        n=n+a[j];
        y++;
    }
    }
    printf("positive number sum and counts is: %d\t %d\n",p,x);
    printf("negative number sum and counts is: %d\t %d",n,y);
getch();
}
