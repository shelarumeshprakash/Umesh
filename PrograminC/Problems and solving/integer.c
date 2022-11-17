//=Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values"
#include<stdio.h>
#include<conio.h>
int main()
{
    unsigned int q,r,s;
    int p;
    printf("enter the even p and q,r,s value: ");
    scanf("%d\n",&p);
    scanf("%d\n",&q);
    scanf("%d\n",&r);
    scanf("%d",&s);
    if(q>r && s>p)
    {
        if((r+s)>(p+q))
        {
            printf("correct value");
        }
        
    }
    else
        {
            printf("wrong value");
        }
    
    getch();
}