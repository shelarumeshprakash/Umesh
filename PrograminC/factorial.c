//factorial
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int fact=1, num, temp;
    printf("enter num: ");
    scanf("%d",&num);
    while(num>0)
    {
        fact=fact*num;
        num--;
    }
    printf("fact is : %d\n", fact);
    
    
    getch();

}