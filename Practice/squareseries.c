#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,i,sum=0;
    
    printf("enter num of terms :");
    scanf("%d",&b);
    
    for(i=1;i<b;i++)
    {
        f=i*i;
        printf("%d \n",f);
        sum=sum+f;
        
    }
    printf("\n sum of series = %d",sum);
getch();
}