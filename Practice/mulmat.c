#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],m[100][100],A[100][100];
    int i,j,k,r1,c1,r2,c2,sum;
    printf("enter mat 1 raw : ");
    scanf("%d",&r1);
    printf("enter mat 1 col : ");
    scanf("%d",&c1);
    printf("enter mat 2 raw : ");
    scanf("%d",&r2);
    printf("enter mat 2 col : ");
    scanf("%d",&c2);
//Enter Mat 1 elements 
printf("enter mat 1 elements : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Mat 1 elemets [%d][%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
//Enter Mat 2 elements 
printf("enter mat 2 elements : \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Mat 2 elemets [%d][%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
//Enter Mat 1 elements are
printf("Mat 1 is \n"); 
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
//Enter Mat 2 elements 
printf("Mat 2 is \n"); 
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n"); 
    }

//Multiplication of Matrix
for(i=0;i<r1;i++)
    for(j=0;j<c2;j++)
        m[i][j]=0;
            for(i=0;i<r1;i++)
            {
                
                for(j=0;j<c2;j++)
                {
                    sum=0;
                        for(k=0;k<c1;k++)
                            sum=sum+(a[i][j]*b[i][j]);
                                m[i][j]=sum;
                }
            }

printf("\n Multiplication of two mat : \n");
for(i=0;i<r1;i++)
{
    printf("\n");
    for(j=0;j<c2;j++)
    {
        printf("%d\t",m[i][j]);
    }
}
printf("\n");
}