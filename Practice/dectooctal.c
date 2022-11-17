#include<stdio.h>
#include<conio.h>

int main()
{
    int n,n1,c=0,i,j;
    printf("enter a num : ");
    scanf("%d", &n);
    n1=n;
    i=1;

    for(j=n;j>0;j=j/8)
    {
        c=c+(j%8)*i;
        i=i*10;
        n=n/8;
    }
    printf("octal = %d", c);
}