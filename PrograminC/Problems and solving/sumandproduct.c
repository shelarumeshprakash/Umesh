#include<stdio.h>
#include<conio.h>

int main()
{
    double w1,w2,it1,it2,avg=0;
    printf("enter number 1 : ");
    scanf("%lf",&w1);
    printf("enter number 2 : ");
    scanf("%lf",&w2);
    printf("enter number 1 : ");
    scanf("%lf",&it1);
    printf("enter number 2 : ");
    scanf("%lf",&it2);
    
    avg=((w1*it1)+(w2*it2))/(it1+it2);
   
    printf("avg : %f\n",avg);
    return 0;
}