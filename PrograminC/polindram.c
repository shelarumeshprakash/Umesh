//palindrom
#include<stdio.h>

int main()
{
    int rev=0,rem=0,num,temp;
    printf("enter a num: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
     if(temp==rev)
    {
        printf("palindrom num is: %d\n",rev);
    }
    else
    {
        printf("not P:%d\n",rev);
    }
return 0;
}