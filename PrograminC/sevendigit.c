//Write a C program that accepts one seven-digit number and separates the number into its individual digits, and prints the digits separated from one another by two spaces each.
#include<stdio.h>
#include<conio.h>
int main()
{
    int a=2323;
    int b,c,j;
    int count=0;
   if(a>=0)
   {
         if(a%10==3)
        {
            count=count+1;
        }
        a=a/10;
   }
     printf("no of three: %d\n",count);
getch();
}