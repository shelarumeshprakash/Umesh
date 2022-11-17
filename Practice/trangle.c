#include<stdio.h>
#include<conio.h>
int main()
{
    int j,i,k,n=1;
    for(i=0;i<=5;i++)
    {
        for(j=1;j<=5-i;j++)
        printf("  ");
        for(k=0;k<=i;k++)
        {
            if(k==0||i==0)
            n=1;
            else
            n=n*(i-k+1)/k;
            printf("%4d",n);
        }
        // printf("%d",j);
        printf("\n");
    
        // for(j=i;j>=1;j--)
        // printf("%d",j);
        // // printf("");
        
    }
    return 0;
}