#include<stdio.h>

void MultiMat(int [100][100], int [100][100]);

int r1,r2,c1,c2;
int M[100][100];
int sum, i=0,j=0,k=0;

int main()
{
    int a[100][100],b[100][100],i,j,k;

    printf("enter row 1: ");
    scanf("%d",&r1);
    printf("enter col 1: ");
    scanf("%d",&c1);
    printf("enter row 2: ");
    scanf("%d",&r2);
    printf("enter col 2: ");
    scanf("%d",&c2);

    if(c1!=r2)
    {
        printf("\n Multiplication not possible ");
    }
    else
    {
        printf("enter mat 1 elements: \n");
        for(i=0;i<r1;i++){
        for(j=0;j<c1;j++){
            printf("Elements [%d],[%d] : ",i,j);
            scanf("%d",&a[i][j]);}}

        printf("enter mat 2 elements: \n");
        for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Elements [%d],[%d] : ",i,j);
            scanf("%d",&b[i][j]);}}


        printf("Mat 1 elements: \n");
        for(i=0;i<r1;i++){
            printf("\n");
        for(j=0;j<c1;j++){
            printf("%d\t",a[i][j]);}}         

        printf("\n\nMat 2 elements: \n");
        for(i=0;i<r2;i++){
            printf("\n");
        for(j=0;j<c2;j++){
            printf("%d\t",b[i][j]);}} 
        
        MultiMat(a,b);
    }

    printf("\n\nMultiplication is : ");
    for(i=0;i<r1;i++){
        printf("\n");
        for(j=0;j<c2;j++){
            printf("%d\t",M[i][j]);}}
    printf("\n\n");
    return 0;
}

void MultiMat(int a[100][100],int b[100][100])
{
    if(i<r1)
    {
        if(j<c2)
        {
            if(k<c1)
            {
                sum+=a[i][k]*b[k][j];
                k++;
                MultiMat(a,b);
            }
            M[i][j]=sum;
            sum=0;
            k=0;
            j++;
            MultiMat(a,b);
        }
        j=0;
        i++;
        MultiMat(a,b);
    }
}