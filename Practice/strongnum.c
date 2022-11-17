#include<stdio.h>

int main()
{
    int n,n1,i,j,s=0,f,k;
    printf("enter strong num : ");
    scanf("\n%d",&n);

    for(k=1;k<=n;k++)
{
    n1=k;
    s=0;

    for(i=k;i>0;i=i/10)
    {
        f=1;
        for(j=1;j<=(i%10);j++)
        {
            // printf("j=%d\t",j);
            f=f*j;
            // printf("f=%d\t",f); 
        }
        s=s+f;
        // printf("s=%d\n",s);
    }
    if(s==n1)
    {
        printf("Strong num = %d \n",n1);
    }
}

}