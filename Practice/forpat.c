#include <stdio.h>
#include<conio.h>
int main()
{
   int i,j,k,num,a=0;
    // printf("enter num: ");
    // scanf("%d",num);
    num=5;
    for(i=0;i<=5;i++)
    {
        for(j=num;j>=1;j--)
        {

            printf(" ");
        }
        for(k=1;k<=i;k++)
        printf("* ");
        printf("\n");
        num--;
    }
getch();
}
  