#include<stdio.h>

int EvenOdd(int st, int n);

int main()
{
    int n;

    printf("eneter a num : ");
    scanf("%d",&n);
    printf("all even from 1 to %d numbers are : \n",n);
    EvenOdd(2, n);
    printf("\nall Odd from 1 to %d numbers are : \n",n);
    EvenOdd(1, n);

    printf("\n\n");
    return 0;
}

int EvenOdd(int st, int n)
{
    if(st>n)
    return;
    printf("%d  ",st);
    EvenOdd(st+2, n);
}