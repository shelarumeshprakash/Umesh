#include<stdio.h>
#include<conio.h>
int main()
{
    int a,i,num,c=0;
    printf("enter a num: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {  
        if(i%2!=0)
        {
            c=c+i;
            printf("%d is odd num\n",i);
        }
        
    }
    printf("sum of all odd num %d",c);
    getch();
}