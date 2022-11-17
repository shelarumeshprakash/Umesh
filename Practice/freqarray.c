#include<stdio.h>

void main()
{
    int a[100], f[100];
    int n,i,j,ctr;

    printf("enter a num:");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
        printf("elements - %d :",i);
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    for(i=0; i<n; i++)
    {
        ctr=1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {
                ctr++;
                f[j]=0;
            }
        }
        if(f[i]!=0)
        {
            f[i]=ctr;
        }
    }
    printf("\n frequent of all elements array : \n");
    for(i=0; i<n; i++)
    {
        if(f[i]!=0)
        {
            printf("%d occures %d times \n", a[i],f[i]);
        }
    }
}