//Write a C program that accepts some integers from the user and find the highest value and the input position.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num[5];
    int i,j,count=0;
    int max=1;
    printf("enter five values : ");
    for(i=0;i<5;i++)
    {
        scanf("%d", &num[i]);
    }
    for(j=0;j<5;j++)
    {
        printf("five values are as: %d\n",num[j]);
        if(num[j]>max)
        {
            max = num[j];
            count=j;
        }
    }
    printf("maximum num : %d\n",max);
    printf("count num : %d",count+1);
    getch();
}