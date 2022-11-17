//=Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater than p and if the sum of r and s is greater than the sum of p and q print "Correct values", otherwise print "Wrong values"
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    double q,r,p;
    double x,y,sq;
    printf("enter the even p value: ");
    scanf("%f",&p);
    printf("enter the even q value: ");
    scanf("%f",&q);
    printf("enter the even r value: ");
    scanf("%f",&r);
    // printf("enter the even s value: ");
    // scanf("%d",&s);
   sq=sqrt((q*q)-(4*p*r));
   x=((-q)+sq)/(2*p);
   y=((-q)-sq)/(2*p);
   printf(" x value:%.5lf ",&x);
   printf(" y value:%.5lf ",&y);
   
    getch();
}