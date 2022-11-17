#include<stdio.h>

int main()
{
    int a[100][100],b[100][100],m[100][100];
    int i,j,k,r1,r2,c1,c2;
    int sum=0;

    printf("mai 1 raw and col r1,c1 : ");
    scanf("%d\n",&r1);
    scanf("%d",&c1);

    printf("mai 2 raw and col r2,c2 : ");
    scanf("%d",&r2);
    scanf("%d",&c2);

    printf("enter mat 1 element: ");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("\n Mat - [%d],[%d]",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter mat 2 element: ");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("\n Mat - [%d],[%d]",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    printf("Mat 1 is: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("Mat 2 is: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    //  printf("addition mat1 and mat2 is: \n");
    // for(i=0;i<r1;i++)
    // {
    //     for(j=0;j<c1;j++)
    //     {
    //         printf("%d\t",m[i][j]=a[i][j]+b[i][j]);
    //     }
    //     printf("\n");
    // }
    printf("multiplication of mat1 and mat2");
    
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            m[i][j]=0;
            for(i=0;i<r1;i++)
            {
                for(j=0;j<c2;j++)
                {
                    
                    for(k=0;k<c1;k++)
                        sum=sum+a[i][j]*b[i][j];
                        m[i][j]=sum;
                }
            }
        }
    }
    printf("\n Multiplication : ");
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