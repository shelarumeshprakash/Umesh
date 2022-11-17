#include<stdio.h>
#include<conio.h>
int main()
{
    long int n, i, t=9;
    int sum=0;
    printf("enter a num : ");
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum+t;
        printf("%ld   ",t);
        t=t*10+9;
    }
    printf("\n sum of all series is : %d",sum);
}