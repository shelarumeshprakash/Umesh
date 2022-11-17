#include<stdio.h>

int main()
{
    int a[100];
    int n,i,mx,mn;

    printf("enter range of array :");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("Elements [%d] - ",i);
        scanf("%d",&a[i]);
    }
    mx=a[0];
    mn=a[0];

    for(i=1; i<n; i++)
    {
        if(a[i]>mx)
        {
            mx=a[i];
        }

        if(a[i]<mn)
        {
            mn=a[i];
        }
    }
    printf("max num : %d \n ",mx);
    printf("min num : %d \n ",mn);
}