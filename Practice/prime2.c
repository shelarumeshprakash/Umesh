#include<stdio.h>
#include<conio.h>

int main()
{
    int f,l,i,ctr,j;
    printf("enter first num. : ");
    scanf("%d",&f);
    printf("enter secound num :");
    scanf("%d",&l);
    printf("Prime Numebers are : ");

    for(j=f;j<=l;j++)
    {
        ctr=0;
        for(i=2;i<=j/2;i++)
        {
            if(j%i==0)
            {
                ctr++;
                break;
            }
        }
    if(ctr==0 && j!=1)
    printf("%d ", j);
    }
    printf("\n");
    getch();
}