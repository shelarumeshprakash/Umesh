#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,i,sum=0;
    printf("enter a num : ");
    scanf("%d",&a);
    printf("enter num of terms :");
    scanf("%d",&b);
    sum=a; c=-1;
    printf("the values of series : \n");
    printf("%d \n",a);
    for(i=1;i<b;i++)
    {
        d=(2*i+1);
        e=pow(a, d);
        f=e*c;
        printf("%d \n",f);
        sum=sum+f;
        c=c*(-1);
    }
    printf("\n sum of series = %d",sum);
getch();
}