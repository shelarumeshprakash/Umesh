// Write a C program to calculate the sum of all number not divisible by 17 between two given integer numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,sum=0;
    for(a=25;a<=45;a++)
    {
        if(a%7==2 || a%7==3)
        {
            sum=a;
            printf("sum is:%d\n",sum);
        }
    }
    // printf("sum is:%d\n");
    return 0;
}