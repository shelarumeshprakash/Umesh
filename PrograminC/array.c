//Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array. Go to the editor
#include<stdio.h>

int main()
{
    int i,j;
    int a[6];
    printf("enter five num : ");
    for(i=0;i<6;i++)
    {
        scanf("%d\t",&a[i]);
    }
    for(j=4;j>=0;j--)
    {
        printf("rearrange are : %d\n",a[j]);
    }
    return 0;
}