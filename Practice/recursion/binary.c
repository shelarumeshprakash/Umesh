#include<stdio.h>

long conBinary(int);

int main()
{
    long b;
    int d;
    printf("eneter a dec num. : ");
    scanf("%d",&d);

    b=conBinary(d);
    printf("binary num is : %d ",b);
    return 0;
}

long conBinary(int d)
{
    static long b,r,f=1;
    if(d!=0)
    {
        r=d%2;
        b+=r*f;
        f=f*10;
        conBinary(d/2);
    }
    return b;
}


