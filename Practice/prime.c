#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=0,l=0,n;
    printf("enter the range for prime num :");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(i%j==0)
            {
               k=i%j;
               break;
            }
            else if(i%j!=0)
            {
                l=i;
                break;
            }
        }
        printf("%d is not Prime Number\n",k);
        // printf("%d is Prime Number\n",l);
    }
    getch();
}