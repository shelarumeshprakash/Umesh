#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
// prigram for maths operation
int a=125, b=12345;
long ax=1234567890;
short s=4043;
float x=2.13459;
double dx=1.1415927;
char c='W';
unsigned long ux=2541567890;

printf("enter the lienth and width as: \n",a,b,ax,s,x,dx,c,ux);
printf("a+c is: %d\n",a+c);
printf("x+c is: %f\n",x+c);
printf("dx+c is: %f\n",dx+c);
printf("((int)dx)+ax is: %ld\n",((int)dx)+ax);
printf("a+x is: %f\n",a+x);
printf("s+b is: %d\n",s+b);
printf("ax+b is: %ld\n",ax+b);
printf("s+c is: %hd\n",s+c);
printf("ax+c is: %ld\n",ax+c);
printf("ax+ux is: %lu\n",ax+ux);
getch();
}