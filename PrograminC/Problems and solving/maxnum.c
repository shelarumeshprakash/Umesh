//Write a C program that accepts some integers from the user and find the highest value and the input position
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5];
    int i,j,k,max=0;
    printf("enter five integer value: ");
    for(i=0;i<5;i++)
    {
        scanf("%d",&num[i]);
        printf("numbers are: %d\n",num[i]);
    }
    for(k=0;k<=i;k++)
    {
    if(num[k]>max)
            {
                max=num[k];
            }
    }
    printf("max num is: %d\n", max);
getch();
}