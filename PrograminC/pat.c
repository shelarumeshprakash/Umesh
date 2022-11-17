//Write a C program to print 3 numbers in a line, starting from 1 and print n lines. Accept number of lines (n, integer) from the user
#include<stdio.h>
#include<conio.h>
int main()
{
    int l,i,j=0,x=1;
    printf("enter line of num :");
    scanf("%d",&l);
    for(i=0;i<l;i++)
    {
        while(j<3)
        {
            printf("%d\t",x++);
            j++;
        }
        j=0;
        printf("\n");

    }
return 0; 
}