#include<stdio.h>

int maxNum(int a[100]);
int n;

int main()
{
    int k[100],mn,i;
    printf("enter num of element");
    scanf("%d",&n);

    printf("enter the elements of array : \n");
    for(i=0;i<n;i++)
    {
    printf("ele [%d] : ",i);
    scanf("%d",&k[i]);
    }
    mn=maxNum(k);
    printf("Maximum no of array is: %d",mn);
    return 0;
}

int maxNum(int a[])
{
    int i=1,mn;
    mn=a[0];
    while(i<n)
    {
        if(mn<a[i])
        mn=a[i];
        i++;
    }
    return mn;
}